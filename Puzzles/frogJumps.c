#include <stdio.h>

int fibo(int n) {
  if (n <= 0) return n;
  else return fibo(n-1) + fibo(n-2);
}
// where s is the number of stones
int frogJumps(int s) {
  return fibo(s + 1);
}

int main() {
  int s = 18;
  printf("%d\n",frogJumps(s));
}
