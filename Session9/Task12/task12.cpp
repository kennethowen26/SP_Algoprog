#include <stdio.h>

int main() {
    char status;
    int langkah = 1;

    do {
        printf("Langkah ke-%d: ", langkah);
        if (langkah == 1)
            printf("Rajin belajar\n");
        else if (langkah == 2)
            printf("Kerjakan semua tugas\n");
        else if (langkah == 3)
            printf("Aktif di kelas\n");
        else if (langkah == 4)
            printf("Belajar dengan teman\n");
        else
            printf("Lebih rajin dan jangan menyerah\n");

        printf("Apakah sudah lulus? (y/n): ");
        scanf(" %c", &status);
        langkah++;
    } while (status != 'y');

    printf("Sudah lulus\n");
    return 0;
}

