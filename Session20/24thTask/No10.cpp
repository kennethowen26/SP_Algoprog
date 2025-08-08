#include <stdio.h>

int main() {
    if (remove("test.c") == 0)
        printf("File deleted successfully.\n");
    else
        printf("Error deleting file.\n");
    return 0;
}

