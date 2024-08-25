#include <stdio.h>
#include <stdlib.h>

void pares(int* v, int* n) {
    int quantidade = 0;
    for (int i = 0; i < *n; i++) {
        if ((v[i] + 1) % 2) {
            quantidade++;
        }
    }
    *n = quantidade;
}

int main() {
    int num;
    scanf("%d", &num);
    int* n = &num;
    int* v = (int*)malloc(num * sizeof(int)); // Allocate memory for the array
    for (int i = 0; i < *n; i++) {
        scanf("%d", &v[i]);
    }
    pares(v, n);
    printf("%d", *n);
    free(v); // Free the allocated memory
    return 0;
}