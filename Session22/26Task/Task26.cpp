#include <stdio.h>

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Total barang: ");
    scanf("%d", &n);

    int harga[n];

    for(int i = 0; i < n; i++) {
        printf("Harga barang %d: ", i + 1);
        scanf("%d", &harga[i]);
    }

   
    bubbleSort(harga, n);

    printf("\nData harga setelah sorting:\n");
    printArray(harga, n);

    return 0;
}


