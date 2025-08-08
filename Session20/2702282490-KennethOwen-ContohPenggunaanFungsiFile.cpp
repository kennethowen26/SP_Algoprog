#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Gagal membuka file.\n");
        return 1;
    }

    fprintf(fp, "Nama saya Kenneth \n");


    fclose(fp);

 
    fp = fopen("data.txt", "r");
    char buffer[100];

    while (fgets(buffer, 100, fp) != NULL) {
        printf("Isi file: %s", buffer);
    }

    
    fclose(fp);

    return 0;
}

