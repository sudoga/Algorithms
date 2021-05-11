#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct estru {
  struct estru* next;
  int data;
} node;

node *head;

void createList() {
  head = NULL;
  printf("[Lista iniciada]\n");
}

void viewList() {
  node * aux;
  for(aux=head; aux->next!=head; aux=aux->next) { 
    printf("Valores da Lista: %d\n", aux->data);
  }
  printf("Valores da Lista: %d\n", aux->data);

}

void insertElements(int i) {
  node * new;
  node * aux;
  new = malloc(sizeof(node));
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
  node * aux;
  printf("\nDeletando primeiro elemento:\n");
  aux = head;
  head = aux->next;

  for(aux=head;aux->next->next!=head;aux=aux->next);
  aux->next = head;
}

void deleteLastElement() {
	node * aux;
    printf("\nDeletando o ultimo elemento: \n");
    for(aux=head;aux->next->next!=head;aux=aux->next);

    aux->next = head;
}

void deleteElementByIndex(int indexNumber) {
  node * aux;
  printf("\nDeletando elemento da posiçao [%d]\n", indexNumber);
  
  int counter = 1;
  int listLenght;
  aux=head;

  for(aux=head;aux->next!=head;aux=aux->next) listLenght++;

  if(indexNumber > listLenght) {
    printf("\nA posicao [%d] nao existe! Nenhum elemento foi apagado.\n", indexNumber);
  } else {
    while (counter < indexNumber) {
     counter++;
     aux=aux->next;
    }
  node *nodeToFree = aux->next;
  aux->next = aux->next->next;
  free(nodeToFree);
  }
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
  deleteElementByIndex(3);
  viewList();
}
