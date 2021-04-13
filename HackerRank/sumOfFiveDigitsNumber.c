// Sum of Digits of a Five Digit Number
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,lastNumber,sum = 0,aux;
    scanf("%d", &n);
    
    aux = n;
 
    while(aux)
    {
        lastNumber = aux % 10; // Encontra o ultimo digito
        sum = sum + lastNumber; // Soma o ultimo digito
        aux = aux/10; // Remove o ultimo digito para ir ao proximo
    }
    printf("%d",sum);
}