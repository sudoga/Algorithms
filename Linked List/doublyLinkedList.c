#include <stdio.h>
#include <stdlib.h>

typedef struct estru {
  struct estru* next;
  int data;
  struct estru* prev;
} Node;

Node *head, *aux, *new, *last;


void createList() {
    head = NULL;
    printf("[Lista iniciada]\n");
}

void viewList() {
  for(aux = head; aux != NULL; aux = aux->next) {
    printf("Valores da Lista: %d\n", aux->data);
  }
}

void insertElements(int i) {
    new = malloc(sizeof(Node));
    new->data = i;
    new->next = NULL;
    new->prev = NULL;


    if(head == NULL) {
        head = new;
    } else {
        aux->next = new;
        new->prev = aux;
        new->next = NULL;
    }
    aux=new;
}

void insertElementEnd(int elementValue) {
  for(aux = head; aux->next != NULL; aux = aux->next);
    new = malloc(sizeof(Node));
    new->data = elementValue;
    aux->next = new;
    new->next = NULL;
    new->prev = aux;

  printf("\n[Inserindo o elemento %d ao final da lista.]\n", elementValue);
}

void insertElementStart(int elementValue) {
  printf("\n[Inserindo o elemento %d no começo da lista.]\n", elementValue);
  new = malloc(sizeof(Node));
  new->data = elementValue;
  head->prev = new;
  new->prev = NULL;
  new->next = head;
  head = new;
}

void printReverse() {
  printf("\n[Invertendo os valores da lista]\n");
  for(aux=head; aux->next != NULL; aux = aux->next);
  while(aux != NULL) {
    printf("Valores da Lista: %d\n", aux->data);
    aux = aux->prev;
  }
}

int main() {
  createList();
  for(int i=1; i <= 10; i++) {
    insertElements(i);
  }
  viewList();
  insertElementEnd(11);
  viewList();
  insertElementStart(9);
  viewList();
  printReverse();
}