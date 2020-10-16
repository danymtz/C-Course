//Estructura de control condicional if-else

#include <stdio.h>                             //Librería para "printf()" y "scanf()"
#include <conio.h>                             //Librería para "getch()"

void main()
{                                               //Inicia  programa
 int x;                                         //Se instancía variable "x" del tipo float(real)

 printf("Escriba su edad: ");                   //Imprime petición de edad (x)
 scanf("%i", &x);                               //Extrae ó escanea un valor para almacenar en "x"

 if (x > 17)                                    //Condición: si el valor de "x" es mayor a 17:
 {                                              //Si la condición se cumple se ejecuta este segmento
  printf ("Usted es mayor de edad");            //Sentencia a ejecutar: Imprimir en pantalla
 }                                              //Termina ejecución de este segmento

 else                                           //Si no se cumple la condición se ejecuta este segmento
 {                                              //Inicia ejecución de segmento alterna
  printf("Usted es menor de edad");             //Sentencia a ejecutar: Imprimir en pantalla
 }                                              //Termina ejecución de este segmento alterna


 getch();                                       //Espera respuesta por teclado

}                                               //Fin del programa

/*

 Estructura de control condicional if-else

 if (condición)
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
 y decidir si ejecutar el bloque de código que incluye.

 "else" contiene un bloque de código alternativo y NO incluye condición para su ejecución,
 éste puede incluirse o no. No es inherente de "if".

 Operadores relacionales

 == Igual a              if (x == 'a')
 != Diferente de         if (x != NULL)
 >  Mayor que            if (x > 10)
 <  Menor que            if (x < 17)
 >= Mayor o igual que    if (x >= 40)
 <= Menor o igual que    if (x <= 18)


*/