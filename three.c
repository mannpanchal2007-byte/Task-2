#include <stdio.h>

int main() {
    int i;

    printf("First 10 even numbers:\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\n", 2 * i);  
    }

    return 0;
}