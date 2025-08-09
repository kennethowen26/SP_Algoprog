#include <stdio.h>

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    printf("=== Bubble Sort ===\n");
    for(int i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        printf("Round %d: ", i+1);
        printArray(arr, n);
    }
}

void selectionSort(int arr[], int n) {
    printf("\n=== Selection Sort ===\n");
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;

        printf("Round %d: ", i+1);
        printArray(arr, n);
    }
}

void insertionSort(int arr[], int n) {
    printf("\n=== Insertion Sort ===\n");
    for(int i=1; i<n; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
        printf("Round %d: ", i);
        printArray(arr, n);
    }
}

int main() {
    int data[] = {14, 6, 23, 18, 7, 47, 2, 83, 16, 38};
    int n = 10;

    int arr1[10], arr2[10], arr3[10];
    for(int i=0; i<n; i++) {
        arr1[i] = arr2[i] = arr3[i] = data[i];
    }

    bubbleSort(arr1, n);
    selectionSort(arr2, n);
    insertionSort(arr3, n);

    return 0;
}

