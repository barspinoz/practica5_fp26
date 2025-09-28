#include<stdio.h>
int main(){
    /*Variables de entrada*/
    float p1;  //Variable que guardara el precio de cada boleto
    float p2;  //Variable que guardara el precio de cada boleto
    float p3;  //Variable que guardara el precio de cada boleto
    float p4;  //Variable que guardara el precio de cada boleto
    float p5;  //Variable que guardara el precio de cada boleto
    int clave ; //Variable que guardara las claves
    int cantidad=0.0;    //variable que va a guardar la cantidad de boletos comprados en una venta
    /*Variables de salida*/
    float cantidadTotal;     //Variable que va a guardar la cantidad total de boletos vendidos en el estadio
    float importe;    //Variable que guardara el monto en cada venta
    /*Variables intermedias*/
    char sigventa;    //Variable para continuar volver al bucle
    float total1=0,total2=0,total3=0,total4=0,total5=0;    //Variable que guardara el monto recaudado de cada tipo
    float cant1=0,cant2=0,cant3=0,cant4=0,cant5=0;      //Variable que guardara la cantidad de boletos vendidos de cada tipo

    printf ("Ingresa el precio del boleto 1=$");    //Se le solicita el precio del boleto 1 al usuario"
    scanf("%f",&p1);    //Lectura del valor ingresado
    printf ("Ingresa el precio del boleto 2=$");    //Se le solicita el precio del boleto 2 al usuario"
    scanf("%f",&p2);    //Lectura del valor ingresado
    printf ("Ingresa el precio del boleto 3=$");    //Se le solicita el precio del boleto 3 al usuario"
    scanf("%f",&p3);   //Lectura del valor ingresado
    printf ("Ingresa el precio del boleto 4=$");    //Se le solicita el precio del boleto 4 al usuario"
    scanf("%f",&p4);    //Lectura del valor ingresado
    printf ("Ingresa el precio del boleto 5=$");    //Se le solicita el precio del boleto 5 al usuario"
    scanf("%f",&p5);    //Lectura del valor ingresado
    do{
        printf("Ingresa la clave (1-5)=\n");    //Solicitud al usuario para ver cual es su clave
        scanf("%i",&clave);    //Lectura de la clave
        printf("Ingrese la cantidad de boletos=\n");    //Se solicita cuantos boletos va a comprar
        scanf("%i",&cantidad);    //Lectura de la cantidad	
        switch (clave){    //Estructura de casos dependiendo la clave ingresada
            case 1 :importe=p1*cantidad;   //Calculo del importe
            cant1=cant1+cantidad;    //Se implementa un acumulador para acumular la cantidad de boletos de cada tipo
            total1=total1+importe;    //Se implementa un acumulador para acumular el monto recaudado de cada tipo 
            printf("Datos del partido \n\t\t clave 1 \n Cantidad de boletos comprados= %i\n\t\t importe= %f\n\t\t",cantidad,importe );//Información de cada venta
            break;/*CIERRE CASO 1*/

            case 2:importe=p2*cantidad;    //Calculo del importe
            cant2=cant2+cantidad;    //Se implementa un acumulador para acumular la cantidad de boletos de cada tipo
            total2=total2+importe;    //Se implementa un acumulador para acumular el monto recaudado de cada tipo
            printf("Datos del partido \n\t\t clave 2 \n Cantidad de boletos comprados= %i\n\t\t importe= %f\n\t\t",cantidad,importe );//Información de cada venta
            break;/*CIERRE CASO 2*/

            case 3:importe=p3*cantidad;    //Calculo del importe
            cant3=cant3+cantidad;    //Se implementa un acumulador para acumular la cantidad de boletos de cada tipo
            total3=total3+importe;    //Se implementa un acumulador para acumular el monto recaudado de cada tipo
            printf("Datos del partido \n\t\t clave 3 \n Cantidad de boletos comprados= %i\n\t\t importe= %f\n\t\t",cantidad,importe );//Información de cada venta
            break;/*CIERRE CASO 3*/

            case 4:importe=p4*cantidad;    //Calculo del importe
            cant4=cant4+cantidad;    //Se implementa un acumulador para acumular la cantidad de boletos de cada tipo
            total4=total4+importe;    //Se implementa un acumulador para acumular el monto recaudado de cada tipo
            printf("Datos del partido \n\t\t clave 4 \n Cantidad de boletos comprados= %i\n\t\t importe= %f\n\t\t",cantidad,importe );//Información de cada venta
            break;/*CIERRE CASO 4*/

            case 5:importe=p5*cantidad;    //Calculo del importe
            cant5=cant5+cantidad;    //Se implementa un acumulador para acumular la cantidad de boletos de cada tipo
            total5=total5+importe;    //Se implementa un acumulador para acumular el monto recaudado de cada tipo
            printf("Datos del partido \n\t\t clave 5 \n Cantidad de boletos comprados= %i\n\t\t importe= %f\n\t\t",cantidad,importe );//Información de cada venta
            break;/*CIERRE CASO 5*/

            default:printf("Clave no valida");    //Default si no ninguna de las opciones anteriores, y se envían un mensaje sobre la invalidación de esa clave
            break;/*CIERRE DEFAULT*/
        }/*Switch*/
        printf("\n Desea ingresar otra llamada: S / N");    //Se le pregunta al usuario el registro de otra venta
		scanf(" %c ",&sigventa);    //Lectura de la decisión del usuario
		
    }while(sigventa=='S'||sigventa=='s');    //condición para que se ejecute otro registro
    printf("\tBoletos vendidos tipo 1 = %f\n\t\t",cant1);    //Mensaje sobre la cantidad de boletos vendidos de cada tipo
    printf("\tBoletos vendidos tipo 2 = %f\n\t\t",cant2);    //Mensaje sobre la cantidad de boletos vendidos de cada tipo
    printf("\tBoletos vendidos tipo 3 = %f\n\t\t",cant3);    //Mensaje sobre la cantidad de boletos vendidos de cada tipo
    printf("\tBoletos vendidos tipo 4 = %f\n\t\t",cant4);    //Mensaje sobre la cantidad de boletos vendidos de cada tipo
    printf("\tBoletos vendidos tipo 5 = %f\n\t\t",cant5);    //Mensaje sobre la cantidad de boletos vendidos de cada tipo
    printf("\n Monto total de la recaudación del estadio:$%f\n\t\t",total1+total2+total3+total4+total5);    /*mensaje para dar a conocer la recaudación total del estadio , sumando todos lo totales*/
    
    return 0;    //Devuelve un valor

}    //main
