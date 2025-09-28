#include <stdio.h>
int main(){
              /*Declaracion de variables de entrada*/
int nume ;//Variable que tendrá el valor  del numero entero que proporcione el usuario
double numr;//Variable que guardara el valor del numero real que proporcione el usuario
int dnume;//Variable que guardara el resultado del calculo el doble del numero entero 
double cnumr;//Variable que guardara el resultado del calculo del cuadrado del numero real
                       /*Ingreso de datos*/
printf("Hola , este es un programa para calcular el doble de un numero entero y el cuadrado de un numero real \n\t\t\t\t\tBIENVENIDO!!!!!!!");//Mensaje de bienvenida al usuario
printf("\nIngresa el numero entero =");//Mensaje al usuario para introducir el valor del numero entero
scanf("%i",& nume);//Lectura del valor
printf("Ingresa el numero real =");//Mensaje al ususario para introducir el numero real
scanf("%lf",& numr);//Lectura del numero real
                     //Se hacen los cálculos
dnume=2*nume ; //Paso para calcular el doble del numero entero
cnumr=numr*numr ; //Paso para calcular el cuadrado del numero real                   
                      //Imprimir los resultados
printf("El resultado del doble del numero entero es= %i\n",dnume);//Impresion del primer resultado
printf("El resultado del cuadrado de un numero real es= %2lf\n",cnumr);//Impresion del segundo resultado
return 0 ;//Devuelve un valor
}//main

