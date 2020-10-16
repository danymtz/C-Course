#include <stdio.h>                                   //Librer�a para "printf()" y "scanf()"
#include <conio.h>                                   //Librer�a para "getch()"

void main()
{                                                    //Inicia  programa
 int x;                                              //Se instanc�a variable "x" de tipo int(entero)
 int y;                                              //Se instanc�a variable "y" de tipo int(entero)

 printf("Escriba un numero: ");                      //Imprime petici�n de un n�mero (x)
 scanf("%i", &x);                                    //Extrae � escanea un valor para almacenar en "x"

 printf("Escriba otro numero: ");                    //Imprime petici�n de otro n�mero (y)
 scanf("%i", &y);                                    //Extrae � escanea un valor para almacenar en "y"

 printf("La suma de los numeros es: %i", x+y);       //Imprime el valor de la suma de "x+y"

 getch();                                            //Espera respuesta por teclado

}                                                    //Fin del programa

/*

 Las operaciones s�lo son permitidas entre datos del mismo tipo.
 Ejm:
 int con int, float con float, etc.

 Operaciones  aritmeticas en C

 Suma: x+y
 Resta: x-y
 Multiplicaci�n: x*y
 Divisi�n: x/y
 M�dulo: x%y  (Devuelve s�lo el residuo de una divisi�n)
 
 Prioridad de operadores

 Para efectuar una o m�s operaciones con diferentes datos, estas deben agruparse en parentesis "()",
 seg�n querramos que se efectuen primero.
 Si no se agrupan, estas operaciones siguen las leyes y propiedades del �lgebra: prioridad de operadores.
 Ejm:
 
 (x+y)*z    Primero se efectuar� la operaci�n de "x+y" y el resultado lo multiplicar� por "z"

  x+y*z     En este caso no hay agrupaci�n, por prioridad de operadores, primero se hace la multiplicaci�n de "y*z"
            y al final se suma con "x"

  La prioridad de operadores sigue este orden: * / % + -

*/