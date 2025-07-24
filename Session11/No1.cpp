#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min;
    float sum = 0, avg;

    printf("Enter 10 integer: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];


    for(i = 0; i < 10; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        sum += arr[i];
    }

    avg = sum / 10;


    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
    printf("Average : %.2f\n", avg);

    return 0;
}

