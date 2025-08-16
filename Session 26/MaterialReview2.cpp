#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    char judul[50];
    char artis[50];
    int durasi; 
} Lagu;

/*
Pada material Review 2 saya membuat code yang memiliki 4 menu 
yaitu : tambah lagu,tampilin semua lagu, cari lagu, dan urutkan lagu berdasarkan durasi(skenario unik) 
Pada tambah lagu kita bisa menginput lagu,penyanyi dan durasi oleh karna itu bisa membuat skenario unik menampilkan lagu 
berdasarkan durasi terpendek (ascending) 

pada menu 1 : membuat input output kedalam file maupun langsung 
pada menu 2 : menampilkan lagu 
pada menu 3 : mencari lagu dengan linear search
pada menu 4 : mengurutkan lagu berdasarkan durasi menggunakan bubble sort 
pada setiap memilih menu menggunakan do-while untuk memilih menu



*/

void tambahLagu() {
    FILE *fp = fopen("lagu.txt", "a");
    if (!fp) {
        printf("Gagal membuka file!\n");
        return;
    }

    Lagu lagu;
    printf("Judul lagu   : ");
    scanf(" %[^\n]", lagu.judul);
    printf("Nama artis   : ");
    scanf(" %[^\n]", lagu.artis);
    printf("Durasi lagu (detik): ");
    scanf("%d", &lagu.durasi);

    fprintf(fp, "%s;%s;%d\n", lagu.judul, lagu.artis, lagu.durasi);
    fclose(fp);

    printf("Lagu berhasil ditambahkan!\n");
}

int bacaLagu(Lagu daftar[]) {
    FILE *fp = fopen("lagu.txt", "r");
    if (!fp) {
        printf("Belum ada data lagu.\n");
        return 0;
    }

    int count = 0;
    while (fscanf(fp, " %[^;];%[^;];%d\n", daftar[count].judul, daftar[count].artis, &daftar[count].durasi) == 3) {
        count++;
    }
    fclose(fp);
    return count;
}

void tampilkanLagu() {
    Lagu daftar[MAX];
    int n = bacaLagu(daftar);
    if (n == 0) return;

    printf("\nDaftar Lagu:\n");
    printf("%-3s %-30s %-20s %-6s\n", "No", "Judul", "Artis", "Durasi");
    for (int i = 0; i < n; i++) {
        printf("%-3d %-30s %-20s %d\n", i+1, daftar[i].judul, daftar[i].artis, daftar[i].durasi);
    }
}

void cariLagu() {
    Lagu daftar[MAX];
    int n = bacaLagu(daftar);
    if (n == 0) return;

    char key[50];
    printf("Masukkan judul lagu yang dicari: ");
    scanf(" %[^\n]", key);

    for (int i = 0; i < n; i++) {
        if (strcasecmp(daftar[i].judul, key) == 0) {
            printf("Lagu ditemukan:\n");
            printf("Judul : %s\n", daftar[i].judul);
            printf("Artis : %s\n", daftar[i].artis);
            printf("Durasi: %d detik\n", daftar[i].durasi);
            return;
        }
    }
    printf("Lagu tidak ditemukan.\n");
}

void urutkanLagu() {
    Lagu daftar[MAX], temp;
    int n = bacaLagu(daftar);
    if (n == 0) return;

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (daftar[j].durasi > daftar[j+1].durasi) {
                temp = daftar[j];
                daftar[j] = daftar[j+1];
                daftar[j+1] = temp;
            }
        }
    }

    printf("\nDaftar Lagu (Urutan berdasarkan durasi):\n");
    printf("%-3s %-30s %-20s %-6s\n", "No", "Judul", "Artis", "Durasi");
    for (int i = 0; i < n; i++) {
        printf("%-3d %-30s %-20s %d\n", i+1, daftar[i].judul, daftar[i].artis, daftar[i].durasi);
    }
}

int main() {
    int pilihan;

    do {
        printf("\n=== MENU DAFTAR LAGU FAVORIT ===\n");
        printf("1. Tambah Lagu\n");
        printf("2. Tampilkan Semua Lagu\n");
        printf("3. Cari Lagu berdasarkan Judul\n");
        printf("4. Urutkan Lagu berdasarkan Durasi\n");
        printf("5. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1: tambahLagu(); break;
            case 2: tampilkanLagu(); break;
            case 3: cariLagu(); break;
            case 4: urutkanLagu(); break;
            case 5: printf("Thank You.....\n"); break;
            default: printf("Pilihan tidak valid!\n");
        }
    } while (pilihan != 5);

    return 0;
}


