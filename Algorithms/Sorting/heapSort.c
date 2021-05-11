#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void createHeap(int *arrToSort, int begin, int end) {
  int aux = arrToSort[begin];
  int j = begin * 2 + 1;
  while (j <= end) {
    if(j < end) {
      if(arrToSort[j] < arrToSort[j + 1]) {
        j = j + 1;
      }
    }
    if (aux < arrToSort[j]) {
      arrToSort[begin] = arrToSort[j];
      begin = j;
      j = 2 * begin + 1;
    } else {
      j = end + 1;
    }
  }
  arrToSort[begin] = aux;
}

void heapSort(int *arrToSort, int N) {
  int i, aux;
  for (i=(N-1)/2; i>=0; i--) {
    createHeap(arrToSort, i, N-1);
  }
  for(i=N-1;i>=1;i--) {
    aux=arrToSort[0];
    arrToSort[0]=arrToSort[i];
    arrToSort[i] = aux;
    createHeap(arrToSort, 0, i-1);
  }
}

int main() {
  int arr[5] = {-2, 4 , 2 , 3 , 9};
  printf("Before sorting\n");
  for(int i = 0; i<5; i++) {
    printf("%d ", arr[i]);
  }
  heapSort(arr, 5);
  printf("\nAfter sorting [Heap Sort]\n");
  for(int i = 0; i<5; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}