#include <stdio.h>
#include <string.h>

struct mhs {
    int nim;
    float gpa;
    char name[20];
};

void printMhs(struct mhs arr[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d %.2f %s\n", arr[i].nim, arr[i].gpa, arr[i].name);
    }
}

void selectionSortStruct(struct mhs arr[], int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j].gpa < arr[minIdx].gpa ||
               (arr[j].gpa == arr[minIdx].gpa && strcmp(arr[j].name, arr[minIdx].name) < 0)) {
                minIdx = j;
            }
        }
        struct mhs temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    struct mhs data[10];
    int n = 10;

  
    for(int i=0; i<n; i++) {
        printf("Data ke-%d:\n", i+1);
        printf("NIM  : ");
        scanf("%d", &data[i].nim);
        printf("GPA  : ");
        scanf("%f", &data[i].gpa);
        printf("Nama : ");
        scanf(" %[^\n]", data[i].name); 
    }

    selectionSortStruct(data, n);

    printf("\nData setelah diurutkan:\n");
    printMhs(data, n);

    return 0;
}

