#include <stdio.h>

int main() {
    int angka;

    printf("Input angka: ");
    scanf("%d", &angka);

    if (angka > 0) {
        printf("%d adalah angka POSITIF\n",angka);
    } else if (angka < 0) {
        printf("%d adalah angka NEGATIF\n",angka);
    } else {
        printf("%d adalah angka NOL.\n",angka);
    }

    return 0;
}

