#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char* result[10] = {"zero", "one", "two", "three", "four", "five","six","seven", "eight", "nine"};
    
    for(int i = a; i <= b; i++) {
        if(i>9) {
            i % 2 == 0 ? printf("even\n") : printf("odd\n");
        }
        else printf("%s\n", result[i]);
    } 
    return 0;
}

