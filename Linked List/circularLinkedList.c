#include <stdio.h>
#include <stdlib.h>

typedef struct estru {
  struct estru* next;
  int data;
} Node;

Node *head, *new, *aux;

void createList() {
  head = NULL;
  printf("[Lista iniciada]\n");
}

void viewList() {
  for(aux=head; aux->next!=head; aux=aux->next) { 
    printf("Valores da Lista: %d\n", aux->data);
  }
  printf("Valores da Lista: %d\n", aux->data);

}

void insertElements(int i) {
  new = malloc(sizeof(Node));
  new->data = i; 

  if(head == NULL) {
    head = new;

  } else {
    aux->next = new;
  }
  aux = new;
  new->next = head;
}

void deleteFirstElement() {
  printf("\nDeletando primeiro elemento:\n");
  aux = head;
  head = aux->next;

  for(aux=head;aux->next->next!=head;aux=aux->next);
  aux->next = head;
}

void deleteLastElement() {
    printf("\nDeletando o ultimo elemento: \n");
    for(aux=head;aux->next->next!=head;aux=aux->next);

    aux->next = head;
    
}

int main() {
  createList();
  for(int i=1; i <= 10; i++) {
    insertElements(i);
  }
  viewList();
  deleteFirstElement();
  viewList();
  deleteLastElement();
  viewList();
}