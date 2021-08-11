/* 
  Time Complexity:
 
  PUSH -> O(1)
  POP -> O(1)

 */

#include <stdio.h>
#define SIZE 8

int stack[SIZE];
int top = -1;

int isEmpty() {
    if (top == -1) return 1;
    else return 0;
}

int isFull() {
    if(top == SIZE) return 1;
    else return 0;
}

int pop() {
   int data;

   if(!isEmpty()) {
       data = stack[top];
       top--;
       return data;
   } else {
       return printf("Stack is empty...");
   }
}

void push(int data) {
    if(!isFull()) {
        top++;
        stack[top] = data;
    } else {
        printf("Stack is full...");
    }
}

void display() {        
    while(!isEmpty()) {
        int data = pop();
        printf("%d\n", data);
    }
}


int main() {
    push(2);
    push(4);
    push(6);
    push(8);
    push(10);
    push(12);
    pop();
    
    printf("Showing the elements: \n");

    display();
    
    return 0;
}
