#include <stdio.h>



/*
  A: N = entrada
  B: resultado = 1
  C: i = 1
  D: resultado = resultado * i
  E: i = i+1
  F: print(resultado)
*/ 

int fatorialMonolitico(int n) {
    if (n < 0) {
        return -1;
    }
    
    int resultado = 1;
    int i = 1;

inicio:
    resultado *= i;
    i++;
    if (i <= n)
        goto inicio;
    return resultado;
  /*
    1: Faça A va_para 2
    2: Se n < 0 então va_para Rx senão va_para 3
    3: Faça B va_para 4
    4: Faça C va_para 5
    5: Faça D va_para 6
    6: Faça E va_para 7
    7: Se i <= n então va_para 8 senão va_para 5
    8: Faça F va_para Rx(✔)
    Rx: print(error)
  */
}


/*
  A: n = entrada
  B: resultado = 1
  C: i = 1
  D: resultado = resultado * i
  E: i = i+1
  F: print(resultado)
*/
int fatorialIterativo(int n) {
    if (n < 0) {
        return -1;
    }
    
    int resultado = 1;
    int i = 1;
    for (i; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
  /*
    1: Faça A va_para 2
    2: Se n < 0 então va_para Rx senão va_para 3
    3: Faça B va_para 4
    4: Faça C va_para 5
    5: Se i <= n então va_para 6 senão va_para 8 
    6: Faça D va_para 7
    7: Faça E va_para 5
    8: Faça F va_para Rx(✔)
    Rx: print(error)
  */
}


/*
  A: n = entrada
  B: return 1
  C: return n * func(n-1)
*/
int fatorialRecursivo(int n) {
    if (n < 0) {
        return -1;
    }
    if (n == 0)
        return 1;
    else
        return n * fatorialRecursivo(n - 1);
  /*
    1: Faça A va_para 2
    2: Se n < 0 então va_para Rx senão va_para 3
    3: Se n == 0 então va_para 4 senão va_para 5
    4: Faça B va_para 6
    5: Faça C va_para 6
    6: Completo Rx(✔)
    Rx: print(error)
  */
}

int main() {
    int num;
    printf("Digite um número inteiro para calcular o fatorial: ");
    scanf("%d", &num);

    int fatorialMon = fatorialMonolitico(num);
    int fatorialIt = fatorialIterativo(num);
    int fatorialRec = fatorialRecursivo(num);

    return 0;
}
