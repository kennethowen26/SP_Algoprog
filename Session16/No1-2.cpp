#include <stdio.h>

struct Address {
    char street[50];
    int number;
    char city[30];
    char province[30];
};

struct DOB {
    int day;
    int month;
    int year;
};

struct Student {
    int NIM;
    char name[50];
    struct Address address;
    char birth_place[30];
    struct DOB dob;
};

int main() {
    struct Student students[5];
	
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d :\n", i + 1);
        printf("NIM: ");
        scanf("%d", &students[i].NIM);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Birth Place: ");
        scanf(" %[^\n]", students[i].birth_place);
        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &students[i].dob.day, &students[i].dob.month, &students[i].dob.year);
        printf("Street Name: ");
        scanf(" %[^\n]", students[i].address.street);
        printf("Street Number: ");
        scanf("%d", &students[i].address.number);
        printf("City: ");
        scanf(" %[^\n]", students[i].address.city);
        printf("Province: ");
        scanf(" %[^\n]", students[i].address.province);
    }
    
    printf("\n");
    printf("==Students Data==\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("NIM: %d\n", students[i].NIM);
        printf("Name: %s\n", students[i].name);
        printf("Birth Place: %s\n", students[i].birth_place);
        printf("Date of Birth: %02d-%02d-%04d\n", students[i].dob.day, students[i].dob.month, students[i].dob.year);
        printf("Address: %s No.%d, %s, %s\n",
               students[i].address.street,
               students[i].address.number,
               students[i].address.city,
               students[i].address.province);
        printf("\n");
    }

    return 0;
}

