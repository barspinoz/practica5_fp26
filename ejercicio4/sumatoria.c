#include <stdio.h>
#include <math.h>
int main() {
	float N = 0; //numero maximo
	float n = 1; //entrada
	float suma = 0; //salida
	float termino = 0; //intermedia
	
	/*leer valores*/
	printf("\n Ingrese un valor maximo N: \n \t");
	scanf("%f",&N);
	printf("\n Ingrese un valor n: \n \t");
	scanf("%f", &n);
	
	/*calculo*/
	if(n <= N) {
		termino = (pow(-1, n)/(n));
		suma = suma + termino;
		n = n++;
	}
	
	printf("\n La sumatoria es: %f \n", &suma);
	return 0;
}