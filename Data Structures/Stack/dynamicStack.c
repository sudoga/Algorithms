#include <stdio.h>
#include <stdlib.h>

typedef struct estru
{
    int data;
    struct estru *next;
}stack;

stack *top = NULL;

void display();
void push(int);
void pop();

int main()
{
    int n, op;
    do
    {
        printf("\n\nStack\n1. Insert\n2. Delete\n3. Display\n0. Exit\n");
        scanf("%d", &op);
        switch (op)
        {
            case 1:
                printf("\nValue number -> ");
                scanf("%d", &n);
                push(n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
        }
    }while (op != 0);
}

void push(int item)
{
    stack *newItem = malloc(sizeof(stack));
    newItem->data = item;
    newItem->next = top;
    top = newItem;
	system("clear");
}

void display()
{   
    stack *temp;
    temp = top;
    while (temp != NULL)
    {
        printf("\n%d", temp->data);
        temp = temp->next;
    }
}

void pop()
{
    if (top == NULL) printf("\n\nStack is empty");
    else  {
        stack *temp;
        temp = top;
        top = top->next;
        printf("\n\n%d deleted.", temp->data);
        free(temp);
    }
}
