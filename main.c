#include <stdio.h>

unsigned long long fatorial(int n);

int main(){
    printf("\n\nOla mundo\n\n");

    printf("Fatorial de 10 = %d", fatorial(10));
    return 0;
}

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) 
        return 1; // Caso base
    return n * fatorial(n - 1); // Chamada recursiva
}