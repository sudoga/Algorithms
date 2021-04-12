/* 
There is a series,S, where the next term is the sum of pervious three terms.
Given the first three terms of the series, a, b, c respectively, you have to 
you have to output the nth term of the series using recursion.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    if(n==1) {
      return a;
    }
    else if(n==2) {
      return b; 
    } 
    else if(n==3) {
      return c;
    } 
    
    else return (n-1)+(n-2)+(n-3);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
