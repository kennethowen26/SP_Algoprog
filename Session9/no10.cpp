#include <stdio.h>

int main() {
    int n, i;
    printf("Input N: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        if(i % 7 == 0)
            printf("7 ");
        else
            printf("%d ", i % 7);
    }
    return 0;
}

