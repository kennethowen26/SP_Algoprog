#include <stdio.h>

int main() {
    int pilihan;


    printf("Silakan pilih jurusan streaming anda \n");
    printf("1. Software Engineering\n");
    printf("2. Intelligence System\n");
    printf("3. Network Technology\n");
    printf("4. Database Technology\n");
    printf("5. Interactive Multimedia\n");
    printf("Pilih(1-5):  ");
    scanf("%d", &pilihan);

    printf("\n");

    if (pilihan == 1) {
        printf("Anda memilih streaming Software Engineering.\n");
    } else if (pilihan == 2) {
        printf("Anda memilih streaming Intelligence System.\n");
    } else if (pilihan == 3) {
        printf("Anda memilih streaming Network Technology.\n");
    } else if (pilihan == 4) {
        printf("Anda memilih streaming Database Technology.\n");
    } else if (pilihan == 5) {
        printf("Anda memilih streaming Interactive Multimedia.\n");
    } else {
        printf("Pilihan tidak valid. Silakan pilih angka 1-5.\n");
    }

    return 0;
}

