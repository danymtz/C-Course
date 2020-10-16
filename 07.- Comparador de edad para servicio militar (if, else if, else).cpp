//Estructura de control condicional if, else if, else

#include <stdio.h>                                                //Librer�a para "printf()" y "scanf()"
#include <conio.h>                                                //Librer�a para "getch()"

void main()
{                                                                 //Inicia  programa
 int x;                                                           //Se instanc�a variable "x" del tipo float(real)

 printf("Escriba su edad: ");                                     //Imprime petici�n de edad (x)
 scanf("%i", &x);                                                 //Extrae � escanea un valor para almacenar en "x"

 if (x>=18 && x<60 )                                              //Condici�n: si "x" mayor o igual 18 y "x" menor 60:
 {                                                                //Si la condici�n se cumple se ejecuta este segmento
  printf ("Puede hacer servicio militar");                        //Sentecncia a ejecutar: Imprimir en pantalla
 }                                                                //Termina ejecuci�n de este segmento

 else if(x < 18)                                                  //Condici�n alterna: si "x" menor a 18
 {                                                                //Inicia ejecuci�n de segmento alterna
  printf("Usted es menor, no puede hacer servicio militar");      //Sentencia a ejecutar: Imprimir en pantalla
 }                                                                //Termina ejecuci�n de este segmento

 else                                                             //Si no se cumple ninguna condici�n se ejecuta este segmento
 {                                                                //Inicia ejecuci�n de segmento
  printf("Usted es mayor, no puede hacer servicio militar");      //Sentencia a ejecutar: Imprimir en pantalla
 }                                                                //Termina ejecuci�n de este segmento

 getch();                                                         //Espera respuesta por teclado

}                                                                 //Fin del programa

/*

 Estructura de control condicional if, else if, else en C

 if (condici�n)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 else if (condici�n)
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

 "else if" es un segmento alternativo que tambi�n incluye condici�n en caso de
 que "if" haya resultado falso. Se pueden usar tantos "else if" como el usuario desee

 "else" es un segmento alternativo que NO lleva condici�n, y este puede
 incluirse o no.

 NOTA: Si if, else if � else s�lo incluyen una sentencia(l�nea) en su segmento,
       se puede omitir el uso de llaves "{ }"

 Ejm:

 if (condici�n)
   Sentencia 1;

 else if (condici�n)
   Sentencia 1;

 else
   Sentencia 1;


 Operadores l�gicos

 && ---->  Y      (AND)   if (x>a && x<b)
 || ---->  O      (OR)    if (x==a || x==b)
 !  ---->  NEGADO (NOT)   if (!(x==a)) equivale a if (x!=a)


*/