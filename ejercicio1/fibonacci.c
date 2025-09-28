#include <stdio.h>

int main() {
    // Variables de entrada
    int a = 0;        // Primer término
    int b = 1;        // Segundo término
    int n ;        // Término n-esimo que queremos
    printf("Ingresa el n-esimo termino=");  //Se solicita cual es el n-esimo termino
    scanf("%i",&n);    //Lectura del valor ingresado

    // Variables de salida
    int actual = 0;  //Contador para acumular el resultado de cada operacion
    int i;  //Contador que nos ayuda a hacer el ciclo las veces n 

    // Calcular Fibonacci
    if (n == 0) {    //Si n es 0 , entonces es 0 por que nunca se inicia el ciclo
        actual = a;    //a es actual , 0
    } else if (n == 1) {  //Si b es 1 , entonces es 1 
        actual = b;    //actual es b
    } else {           //si no
        for (i = 2; i <= n; i++) {    //for para calcular el actual tantas veces n
            actual = a + b;         //calculo para actual
            a = b;      //se actualizan los valores , a =b
            b = actual;  //b = actual para que vaya incrementando el valor y vaya acumulandose
        }  //Cierre else
    }  //Cierre for

    printf("El término enésimo es %i\n", actual);  //Mensaje que da a conocer el resultado

    return 0;  //Devuelve un valor
}  //Cierre main
