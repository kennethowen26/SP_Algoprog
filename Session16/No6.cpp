#include <stdio.h>

struct subjectScore {
    char name[50];
    char grade;
    int sks;
};

struct studentScore {
    char nim[11];
    char name[30];
    struct subjectScore subjects[5];
};

int gradeWeight(char grade) {
    switch (grade) {
        case 'A': return 4;
        case 'B': return 3;
        case 'C': return 2;
        case 'D': return 1;
        case 'E': return 0;
        default : return 0;
    }
}

int main() {
    struct studentScore student;
    int totalSKS = 0, totalWeight = 0;

    printf("NIM: ");
    scanf(" %[^\n]", student.nim);

    printf("Name: ");
    scanf(" %[^\n]", student.name);

 
    for (int i = 0; i < 5; i++) {
        printf("\nSubject %d:\n", i + 1);
        printf("Subject Name: ");
        scanf(" %[^\n]", student.subjects[i].name);
        printf("Grade (A-E): ");
        scanf(" %c", &student.subjects[i].grade);
        printf("SKS: ");
        scanf("%d", &student.subjects[i].sks);

        totalSKS += student.subjects[i].sks;
        totalWeight += gradeWeight(student.subjects[i].grade) * student.subjects[i].sks;
    }

    float gpa = (float) totalWeight / totalSKS;


    printf("\n=== Student Score Data ===\n");
    printf("NIM  : %s\n", student.nim);
    printf("Name : %s\n", student.name);
    printf("\nSubject Scores:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s : %c (SKS: %d)\n",
               student.subjects[i].name,
               student.subjects[i].grade,
               student.subjects[i].sks);
    }
    printf("\nTotal SKS 	: %d\n", totalSKS);
    printf("GPA         	: %.2f\n", gpa);

    return 0;
}

