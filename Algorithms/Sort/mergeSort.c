#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *arrToSort, int begin, int middle, int end) {
  int *temp, p1, p2, size, i, j, k;
  int end1 = 0, end2 = 0;
  size = end-begin+1;
  p1=begin;
  p2=middle+1;
  temp = (int *) malloc(size*sizeof(int));
  if(temp!=NULL) {
    for(i=0;i<size;i++) {
      if(!end1 && !end2) {
        if(arrToSort[p1] < arrToSort[p2]) temp[i]=arrToSort[p1++];
        else temp[i]=arrToSort[p2++];
        if(p1>middle) end1=1;
        if(p2>end) end2=1;
      } else {
        if(!end1)
          temp[i]=arrToSort[p1++];
          else temp[i]=arrToSort[p2++];
      }
    }
    for(j=0, k=begin;j<size;j++,k++)
        arrToSort[k]=temp[j];
  }
  free(temp);
}

void mergeSort(int *arrToSort, int begin, int end) {
  int middle;
  if(begin < end) {
    middle = floor((begin+end)/2);
    mergeSort(arrToSort, begin, middle);
    mergeSort(arrToSort, middle+1, end);
    merge(arrToSort, begin, middle, end);
  }
}

int main() {
  int arr[5] = {-2, 4 , 2 , 3 , 9};
  printf("Before sorting\n");
  for(int i = 0; i<5; i++) {
    printf("%d ", arr[i]);
  }
  mergeSort(arr, 0, 5);
  printf("\nAfter sorting [Merge Sort]\n");
  for(int i = 0; i<5; i++) {
    printf("%d ", arr[i]);
  }
  return 0;
}