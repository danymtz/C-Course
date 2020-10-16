#include <stdio.h>                                     //Librería para "printf()" y "scanf()"
#include <conio.h>                                     //Librería para "getch()"

void main()
{                                                       //Inicia  programa
 float x, y;                                            //Se instancía variable "x" e "y" del tipo float(real)
 float a, b;                                            //Se instancía variable "x" e "y" del tipo float(real)
 float resultado;                                       //Se instancía variable "resultado" del tipo float(real)


 printf("Escriba un numero: ");                         //Imprime petición de un número (x)
 scanf("%i", &x);                                       //Extrae ó escanea un valor para almacenar en "x"

 printf("Escriba otro numero: ");                       //Imprime petición de otro número (y)
 scanf("%i", &y);                                       //Extrae ó escanea un valor para almacenar en "y"

 a = x;                                                 //Asigna a "a" el valor guardado en "x"
 b = y;                                                 //Asigna a "b" el valor guardado en "y"
 resultado = a + b;                                     //Asigna a "resultado" el valor de la suma de "a+b"

 printf("La suma de los numeros es: %i", resultado);    //Imprime el valor de "resultado"

 getch();                                               //Espera respuesta por teclado

}                                                       //Fin del programa

/*

 Las operaciones de asignación sólo son permitidas entre datos del mismo tipo.
 Ejm:
 int con int, float con float, etc.

 Operaciones de asignación en C

 a = n -----> a = n
 a++ -------> a = a + 1
 a-- -------> a = a - 1
 a += n ----> a = a + n
 a -= n ----> a = a - n
 a *= n ----> a = a * n
 a /= n ----> a = a / n
 a %= n ----> a = a % n

*/