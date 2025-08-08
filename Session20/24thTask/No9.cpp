#include <stdio.h>

int main() {
    FILE *src = fopen("test.c", "rb");
    FILE *dst = fopen("try.c", "wb");
    char ch;

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);
    return 0;
}

