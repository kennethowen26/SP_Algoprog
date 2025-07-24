#include <stdio.h>

const float pi = 3.14159;


float hitungLuas(float jariJari) {
    return pi * jariJari * jariJari;
}

float hitungKeliling(float jariJari) {
    return 2 * pi * jariJari;
}

void tampilkanHasil(float jariJari) {
    float luas = hitungLuas(jariJari);
    float keliling = hitungKeliling(jariJari);

    printf("Jari-jari: %.2f\n", jariJari);
    printf("Luas Lingkaran: %.2f\n", luas);
    printf("Keliling: %.2f\n", keliling);
}

int main() {
    float r;

    printf("Input jari-jari: ");
    scanf("%f", &r);

    tampilkanHasil(r);

    return 0;
}

