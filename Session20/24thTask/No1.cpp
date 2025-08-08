#include <stdio.h>
#include <stdlib.h>

int calculateAge(int year) {
    return 2025 - (year + 1900); 
}

int main() {
    FILE *file = fopen("birthdays.txt", "r");
    if (!file) {
        printf("File not found!\n");
        return 1;
    }

    int dd, mm, yy, age;
    int above51 = 0, between44_51 = 0, between36_43 = 0, between28_35 = 0, below28 = 0;

    while (fscanf(file, "%d/%d/%d", &dd, &mm, &yy) == 3) {
        if (yy <= 25) yy += 100; 
        age = 2025 - (1900 + yy);

        if (age > 51)
            above51++;
        else if (age >= 44)
            between44_51++;
        else if (age >= 36)
            between36_43++;
        else if (age >= 28)
            between28_35++;
        else
            below28++;
    }

    fclose(file);

    printf("Above 51       : %d\n", above51);
    printf("Between 44-51  : %d\n", between44_51);
    printf("Between 36-43  : %d\n", between36_43);
    printf("Between 28-35  : %d\n", between28_35);
    printf("Below 28       : %d\n", below28);

    return 0;
}

