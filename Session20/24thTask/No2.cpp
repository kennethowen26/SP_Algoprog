#include <stdio.h>

struct Mhs {
    char name[20];
    int nim;
    float gpa;
};

int main() {
    FILE *file = fopen("Mhs.dat", "wb");
    struct Mhs mhs;

    for (int i = 0; i < 5; i++) {
        printf("Name: ");
        scanf(" %[^\n]", mhs.name);
        printf("NIM: ");
        scanf("%d", &mhs.nim);
        printf("GPA: ");
        scanf("%f", &mhs.gpa);

        fwrite(&mhs, sizeof(mhs), 1, file);
    }
	

    fclose(file);
    return 0;
}

