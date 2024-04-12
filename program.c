#include <stdio.h>

int fatorialMonolitico(int n) {
    int resultado = 1;
    int i = 1;

inicio:
    resultado *= i;
    i++;
    if (i <= n)
        goto inicio;
    return resultado;
}

int fatorialIterativo(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int fatorialRecursivo(int n) {
    if (n == 0)
        return 1;
    else
        return n * fatorialRecursivo(n - 1);
}

int main() {
    int num;
    printf("Digite um número inteiro para calcular o fatorial: ");
    scanf("%d", &num);

    int fatorialMon = fatorialMonolitico(num);
    int fatorialIt = fatorialIterativo(num);
    int fatorialRec = fatorialRecursivo(num);

    printf("Fatorial (monolítico): %d\n", fatorialMon);
    printf("Fatorial (iterativo): %d\n", fatorialIt);
    printf("Fatorial (recursivo): %d\n", fatorialRec);

    if (fatorialMon == fatorialIt && fatorialIt == fatorialRec) {
        printf("Os três métodos são equivalentes.\n");
    } else {
        printf("Os métodos não são equivalentes.\n");
    }

    return 0;
}