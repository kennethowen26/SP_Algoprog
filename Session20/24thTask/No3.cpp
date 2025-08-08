#include <stdio.h>

struct Mhs {
    char name[20];
    int nim;
    float gpa;
};

int main() {
    FILE *file = fopen("Mhs.dat", "rb");
    struct Mhs mhs;

    printf("NIM     Name                GPA\n");
    printf("===============================\n");
    while (fread(&mhs, sizeof(mhs), 1, file)) {
        printf("%-8d %-20s %.2f\n", mhs.nim, mhs.name, mhs.gpa);
    }

    fclose(file);
    return 0;
}

