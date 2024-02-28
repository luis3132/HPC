#include <stdio.h>

// Función para calcular la suma de números de Fibonacci en índices pares
unsigned long long int calculateEvenFibonacciSum(int n) {
    if (n <= 0)
        return 0;
    

    long long int* fibo;
    fibo = new long long int[n + 1];
    *(fibo) = 0, *(fibo + 1) = 1;

    unsigned long long int sum = 0;

    for (int i = 2; i <= n; i++) {
        *(fibo + i) = *(fibo + i - 1) + *(fibo + i - 2);

        if (i % 2 == 0)
            sum += *(fibo + i);
    }
    delete[] fibo;
    return sum;
}

int main() {
    int n;
    printf("Ingrese el número de términos de Fibonacci para calcular la suma de índices pares: ");
    scanf("%d", &n);

    unsigned long long int sum = calculateEvenFibonacciSum(n);

    printf("La suma de los números de Fibonacci en índices pares hasta %d términos es: %llu\n", n, sum);

    return 0;

}