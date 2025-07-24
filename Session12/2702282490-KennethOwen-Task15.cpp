#include <stdio.h>

int main() {
    int height, i, j, space;

    printf("Tinggi segitiga: ");
    scanf("%d", &height);

    for(i = 1; i <= height; i++) {
        for(space = 1; space <= height - i; space++) {
            printf(" ");
		}
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

