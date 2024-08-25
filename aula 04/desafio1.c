#include <stdio.h>
#include <stdlib.h>

int max_index(int *v, int size) {
    int max = *v;
    int max_idx = 0;
    int *ptr = v;

    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > max) {
            max = *ptr;
            max_idx = i;
        }
    }

    return max_idx;
}

int main() {
    int N;
    scanf("%d", &N);

    int *vetor = (int*)malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    int resultado = max_index(vetor, N);
    printf("%d\n", resultado);

    free(vetor);
    return 0;
}