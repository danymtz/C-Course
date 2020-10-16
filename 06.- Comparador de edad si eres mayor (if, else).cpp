//Estructura de control condicional if-else

#include <stdio.h>                             //Librer�a para "printf()" y "scanf()"
#include <conio.h>                             //Librer�a para "getch()"

void main()
{                                               //Inicia  programa
 int x;                                         //Se instanc�a variable "x" del tipo float(real)

 printf("Escriba su edad: ");                   //Imprime petici�n de edad (x)
 scanf("%i", &x);                               //Extrae � escanea un valor para almacenar en "x"

 if (x > 17)                                    //Condici�n: si el valor de "x" es mayor a 17:
 {                                              //Si la condici�n se cumple se ejecuta este segmento
  printf ("Usted es mayor de edad");            //Sentencia a ejecutar: Imprimir en pantalla
 }                                              //Termina ejecuci�n de este segmento

 else                                           //Si no se cumple la condici�n se ejecuta este segmento
 {                                              //Inicia ejecuci�n de segmento alterna
  printf("Usted es menor de edad");             //Sentencia a ejecutar: Imprimir en pantalla
 }                                              //Termina ejecuci�n de este segmento alterna


 getch();                                       //Espera respuesta por teclado

}                                               //Fin del programa

/*

 Estructura de control condicional if-else

 if (condici�n)
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


 "if" relaciona valores para compararlos y aprobarlos como verdadero o falso
 y decidir si ejecutar el bloque de c�digo que incluye.

 "else" contiene un bloque de c�digo alternativo y NO incluye condici�n para su ejecuci�n,
 �ste puede incluirse o no. No es inherente de "if".

 Operadores relacionales

 == Igual a              if (x == 'a')
 != Diferente de         if (x != NULL)
 >  Mayor que            if (x > 10)
 <  Menor que            if (x < 17)
 >= Mayor o igual que    if (x >= 40)
 <= Menor o igual que    if (x <= 18)


*/