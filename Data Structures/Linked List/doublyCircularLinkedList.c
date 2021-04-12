#include <stdio.h>
#include <stdlib.h>

typedef struct estru {
  struct estru* next;
  int data;
  struct estru* prev;
} node;

node *new, *aux, *head, *tail;

void createList() {
  if (head == NULL) head = new;
}

void viewList() {
  for(aux=head; aux->next!=head;aux=aux->next) {
    printf("Valores da lista: %d\n",aux->data);
  }
  printf("Valores da lista: %d\n",aux->data);
}

void insertElements(int i) {
  new = malloc(sizeof(node));
  new->data=i;

  if(head == NULL) {
    head = new;
    tail=new;
  } else {
    tail->next=new;
    aux->next=new;
    new->prev=tail;
    tail=new;
    tail->next=head;
    head->prev=tail;
  }
  aux=new;
}

void insertFirst(int elementValue) {
  printf("\nAdicionando o elemento [%d] no comeco da lista\n", elementValue);
  new = malloc(sizeof(node));
  new->data=elementValue;
  head->prev=new;
  new->next=head;
  head=new;
  head->prev=tail;
  tail->next=head;
}

void insertEnd(int elementValue) {
  printf("\nAdicionando o elemento [%d] no final da lista\n", elementValue);
  new = malloc(sizeof(node));
  new->data=elementValue;
  tail->next=new;
  new->prev=tail;
  tail=new;
  tail->next=head;
  head->prev=tail;
}

void deleteFirst() {
  printf("\nDeletando o primeiro elemento\n");
  aux=head->next;
  free(head);
  head=aux;
  head->prev=tail;
  tail->next=head;
}

void deleteLast() {
  printf("\nDeletando o ultimo elemento\n");
  aux=tail->prev;
  free(tail);
  tail=aux;
  tail->next=head;
  head->prev=tail;
}

void deleteSelected(int selectedElement) {
  printf("\nDeletando o elemento com valor [%d]\n", selectedElement);
  for(aux=head; aux->next->data!=selectedElement; aux=aux->next);
  
  node *NodeToFree = aux->next;
  aux->next = aux->next->next;
  free(NodeToFree);
}

int main() {
  createList();
  for(int i = 1; i<=10; i++) insertElements(i);
  viewList();
  insertFirst(11);
  viewList();
  insertEnd(99);
  viewList();
  deleteFirst();
  viewList();
  deleteLast();
  viewList();
  deleteSelected(5);
  viewList();
}