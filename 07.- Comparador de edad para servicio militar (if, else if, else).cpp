//Estructura de control condicional if, else if, else

#include <stdio.h>                                                //Librería para "printf()" y "scanf()"
#include <conio.h>                                                //Librería para "getch()"

void main()
{                                                                 //Inicia  programa
 int x;                                                           //Se instancía variable "x" del tipo float(real)

 printf("Escriba su edad: ");                                     //Imprime petición de edad (x)
 scanf("%i", &x);                                                 //Extrae ó escanea un valor para almacenar en "x"

 if (x>=18 && x<60 )                                              //Condición: si "x" mayor o igual 18 y "x" menor 60:
 {                                                                //Si la condición se cumple se ejecuta este segmento
  printf ("Puede hacer servicio militar");                        //Sentecncia a ejecutar: Imprimir en pantalla
 }                                                                //Termina ejecución de este segmento

 else if(x < 18)                                                  //Condición alterna: si "x" menor a 18
 {                                                                //Inicia ejecución de segmento alterna
  printf("Usted es menor, no puede hacer servicio militar");      //Sentencia a ejecutar: Imprimir en pantalla
 }                                                                //Termina ejecución de este segmento

 else                                                             //Si no se cumple ninguna condición se ejecuta este segmento
 {                                                                //Inicia ejecución de segmento
  printf("Usted es mayor, no puede hacer servicio militar");      //Sentencia a ejecutar: Imprimir en pantalla
 }                                                                //Termina ejecución de este segmento

 getch();                                                         //Espera respuesta por teclado

}                                                                 //Fin del programa

/*

 Estructura de control condicional if, else if, else en C

 if (condición)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 else if (condición)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 else
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 "if" compara valores para aprobarlos como verdadero o falso
 y decidir si ejecutar el segmento que incluye

 "else if" es un segmento alternativo que también incluye condición en caso de
 que "if" haya resultado falso. Se pueden usar tantos "else if" como el usuario desee

 "else" es un segmento alternativo que NO lleva condición, y este puede
 incluirse o no.

 NOTA: Si if, else if ó else sólo incluyen una sentencia(línea) en su segmento,
       se puede omitir el uso de llaves "{ }"

 Ejm:

 if (condición)
   Sentencia 1;

 else if (condición)
   Sentencia 1;

 else
   Sentencia 1;


 Operadores lógicos

 && ---->  Y      (AND)   if (x>a && x<b)
 || ---->  O      (OR)    if (x==a || x==b)
 !  ---->  NEGADO (NOT)   if (!(x==a)) equivale a if (x!=a)


*/