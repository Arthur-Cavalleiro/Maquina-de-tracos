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

    Considerando n = 2
    (1,e)(2,e)(3,e)(4,B)(5,BC)(6,BCD)(7,BCDE)(5,BCDE)(6,BCDED)(7,BCDEDE)(8,BCDEDEF)(✔)
  
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

    Considerando n = 2
    (1,e)(2,e)(3,e)(4,B)(5,BC)(6,BC)(7,BCD)(8,BCDE)(6,BCDE)(7,BCDED)(8,BCDEDE)(6,BCDEDE)(9,BCDEDEF)(✔)
    
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

    Considerando n = 2
    (1,e)(2,e)(3,e)(4,e)(5,B)(1,B)(2,B)(3,B)(4,B)(5,BB)(1,BB)(2,BB)(3,BB)(4,BB)(6,BBC)(7,✔)
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
