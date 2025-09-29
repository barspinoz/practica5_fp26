#include <stdio.h>
#include <math.h>

int main() {
    double N;        // número máximo
    double suma = 0; // salida

    // Leer valor
    printf("\nIngrese un valor maximo N: ");
    scanf("%lf", &N);

    // Calculo de la sumatoria
    for (int i = 1; i <= N; i++) {
        suma += pow(-1, i) / i;
    }

    printf("\nLa sumatoria es: %f\n", suma);

    return 0;
}
