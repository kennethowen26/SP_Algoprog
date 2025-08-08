#include <stdio.h>

int main() {
    FILE *file = fopen("Mhs.dat", "rb");

    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

  
    fseek(file, 0, SEEK_END); // fseek(..,SEEK_END) untuk memindahkan pointer ke akhir file
    long size = ftell(file);  // ftell() untuk mengetahui ukuran file
    printf("Ukuran file: %ld bytes\n", size);

   
    rewind(file); //rewind() digunakan untuk mengembalikan pointer ke awal
    printf("Pointer file dikembalikan ke awal dengan rewind().\n");

   
    char ch;
    if (fread(&ch, sizeof(char), 1, file) == 1) {
        printf("Karakter pertama di file (setelah rewind): %c\n", ch);
    } else {
        printf("File kosong atau tidak bisa dibaca.\n");
    }

    fclose(file);
    return 0;
}

