#include <iostream>

int binarySearch(int list[10], int item, int size) {
	int low = 0;
	int high = size - 1;
	while (low <= high) {
		int middle = (low+high)/2;
		int guess = list[middle];
		if (guess == item) return printf("%d", middle);
		if (guess > item) high = middle - 1;
		else low = middle + 1;
	}
	return printf("Nah! :/");
}

int main(void) {
	int arr[10] = {1,3,5,7,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	binarySearch(arr, 2, size); 
}

// O(log n)
