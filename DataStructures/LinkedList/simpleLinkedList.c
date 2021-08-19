#include <stdio.h>
#include <stdlib.h>

typedef struct estru {
    int data;
    struct estru *next;
} node;

node * head;

void createList() {
    head = NULL;
    printf("Lista iniciada\n");
}

void viewList() {
	  node * aux;
    for(aux=head; aux != NULL; aux=aux->next) { 
        printf("%d\n", aux->data);
    }
}

void insertElements(int i) {
    node * new;
    node * aux;
    new = malloc(sizeof(node));
    new->data = i;
    new->next = NULL;

    if(head == NULL) {
        head = new;
    } else {
        aux->next = new;
    }
    aux=new;
}

void deleteFirstElement() {
    node * aux;
    printf("\nDeletando primeiro elemento:\n");
    aux = head->next;
    free(head);
    head = aux;
}

void deleteLastElement() {
   	node * aux; 
    printf("\nDeletando o ultimo elemento:\n");
    for(aux=head; aux->next->next != NULL; aux=aux->next);


    free(aux->next);
    aux->next=NULL;
}

void deleteSelectElement(int elementValue) {
	  node * aux;
	  printf("\nDeletando o elemento selecionado - %d:\n", elementValue);
    for(aux=head; aux->next->data!= elementValue; aux=aux->next);
    
    if(aux==NULL) printf("\nElemento nao encontrada");
    else {
        node *nodeToFree = aux->next;
        aux->next = aux->next->next;
        free(nodeToFree);
    }
}

static void reverseList() {
    node * aux;
    printf("\nInvertendo a lista:\n");
    node *next = NULL;
    node *prev = NULL;
    aux = head;
    while(aux!=NULL) {
        next = aux->next;
        aux->next = prev;
        prev = aux;
        aux = next;
    }
    head=prev;
}

int main() {
    createList();
    // Altere o tamanho aqui 
    for(int i=0; i < 10; i++) {
        insertElements(i);
    }
    viewList();
    deleteFirstElement();
    viewList();
    deleteLastElement();
    viewList();
    deleteSelectElement(2);
    viewList();
    reverseList();
    viewList();
}
