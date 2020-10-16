#include <stdio.h>                                     //Librer�a para "printf()" y "scanf()"
#include <conio.h>                                     //Librer�a para "getch()"

void main()
{                                                       //Inicia  programa
 float x, y;                                            //Se instanc�a variable "x" e "y" del tipo float(real)
 float a, b;                                            //Se instanc�a variable "x" e "y" del tipo float(real)
 float resultado;                                       //Se instanc�a variable "resultado" del tipo float(real)


 printf("Escriba un numero: ");                         //Imprime petici�n de un n�mero (x)
 scanf("%i", &x);                                       //Extrae � escanea un valor para almacenar en "x"

 printf("Escriba otro numero: ");                       //Imprime petici�n de otro n�mero (y)
 scanf("%i", &y);                                       //Extrae � escanea un valor para almacenar en "y"

 a = x;                                                 //Asigna a "a" el valor guardado en "x"
 b = y;                                                 //Asigna a "b" el valor guardado en "y"
 resultado = a + b;                                     //Asigna a "resultado" el valor de la suma de "a+b"

 printf("La suma de los numeros es: %i", resultado);    //Imprime el valor de "resultado"

 getch();                                               //Espera respuesta por teclado

}                                                       //Fin del programa

/*

 Las operaciones de asignaci�n s�lo son permitidas entre datos del mismo tipo.
 Ejm:
 int con int, float con float, etc.

 Operaciones de asignaci�n en C

 a = n -----> a = n
 a++ -------> a = a + 1
 a-- -------> a = a - 1
 a += n ----> a = a + n
 a -= n ----> a = a - n
 a *= n ----> a = a * n
 a /= n ----> a = a / n
 a %= n ----> a = a % n

*/