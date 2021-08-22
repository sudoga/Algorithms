#include <vector>
#include <iostream>

using namespace std;

vector<int> reverseArray(vector<int> a) {
  int n = a.size();
  int aux;
  for(int i = 0; i < n/2; i++) {
    aux = a[n - i - 1];
    a[n - i - 1] = a[i];
    a[i] = aux;
  }
  return a;
}
