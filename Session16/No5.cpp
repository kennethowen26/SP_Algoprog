#include <stdio.h>

struct studentScore {
    char nim[11];
    char name[30];
    char subjectCode[5];
    int sks;
    char grade;
};

int main() {
    struct studentScore student;

    printf("Input NIM: ");
    scanf(" %[^\n]", student.nim);

    printf("Input Name: ");
    scanf(" %[^\n]", student.name);

    printf("Input Subject Code: ");
    scanf(" %[^\n]", student.subjectCode);

    printf("Input SKS: ");
    scanf("%d", &student.sks);

    printf("Input Grade (A-E): ");
    scanf(" %c", &student.grade);


    printf("\n=== Student Score Data ===\n");
    printf("NIM         : %s\n", student.nim);
    printf("Name        : %s\n", student.name);
    printf("Subject Code: %s\n", student.subjectCode);
    printf("SKS         : %d\n", student.sks);
    printf("Grade       : %c\n", student.grade);

    return 0;
}

