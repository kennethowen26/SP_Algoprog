#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i;


    printf("Input string: ");
    scanf("%s", str);

    len = strlen(str);

    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}

