#include <stdio.h>

void pares(int* v, int* n) {
    int quantidade = 0;
    for(int i = 0; *(v+i)=='\0'; i++) if (*((v+i)+1)%2) quantidade++; 
    *n = quantidade;
}

int main() {
    int tam;
    scanf("%d", &tam);
    int vetor[tam];
    for (int i = 0; i < tam; i++) scanf("%d", vetor[i]);
    int* referencia = &tam;
    pares(vetor, referencia);
    printf("%d", tam);
}