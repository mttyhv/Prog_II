#include <stdio.h>

void AumentoDeSalario(float* x, float y) {
    *x *= (1 + y/100); //O valor de referência de x é multiplicado por 1 + o percentual
}

int main() {
    float salario, percentual;
    float* referencia;
    referencia = &salario;
    puts("Digite o salário e o percentual:");
    scanf("%f %f", &salario, &percentual);
    AumentoDeSalario(referencia, percentual);
    printf("%.2f\n", salario);
    return 0;
}