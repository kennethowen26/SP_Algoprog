#include <stdio.h>

struct automobile {
    int year;
    char model[8];
    int engine_power;
    float weight;
};

int main() {
    struct automobile cars[5];

    for (int i = 0; i < 5; i++) {
        printf("\nCar %d\n", i + 1);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Model: ");
        scanf(" %[^\n]", cars[i].model);
        printf("Engine Power: ");
        scanf("%d", &cars[i].engine_power);
        printf("Weight: ");
        scanf("%f", &cars[i].weight);
    }

    printf("\n== Car Data ==\n");
    for (int i = 0; i < 5; i++) {
        printf("\nCar %d: Year %d, Model %s, Engine Power %d, Weight %.2f\n",
               i + 1, cars[i].year, cars[i].model, cars[i].engine_power, cars[i].weight);
    }

    return 0;
}

