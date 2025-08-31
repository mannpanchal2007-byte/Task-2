#include <stdio.h>

int main() {
    int n, i;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("First %d odd numbers are:\n", n);

    for (i = 1; i <= 2*n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}