#include <stdio.h>                                   //Librería para "printf()" y "scanf()"
#include <conio.h>                                   //Librería para "getch()"

void main()
{                                                    //Inicia  programa
 int x;                                              //Se instancía variable "x" de tipo int(entero)
 int y;                                              //Se instancía variable "y" de tipo int(entero)

 printf("Escriba un numero: ");                      //Imprime petición de un número (x)
 scanf("%i", &x);                                    //Extrae ó escanea un valor para almacenar en "x"

 printf("Escriba otro numero: ");                    //Imprime petición de otro número (y)
 scanf("%i", &y);                                    //Extrae ó escanea un valor para almacenar en "y"

 printf("La suma de los numeros es: %i", x+y);       //Imprime el valor de la suma de "x+y"

 getch();                                            //Espera respuesta por teclado

}                                                    //Fin del programa

/*

 Las operaciones sólo son permitidas entre datos del mismo tipo.
 Ejm:
 int con int, float con float, etc.

 Operaciones  aritmeticas en C

 Suma: x+y
 Resta: x-y
 Multiplicación: x*y
 División: x/y
 Módulo: x%y  (Devuelve sólo el residuo de una división)
 
 Prioridad de operadores

 Para efectuar una o más operaciones con diferentes datos, estas deben agruparse en parentesis "()",
 según querramos que se efectuen primero.
 Si no se agrupan, estas operaciones siguen las leyes y propiedades del álgebra: prioridad de operadores.
 Ejm:
 
 (x+y)*z    Primero se efectuará la operación de "x+y" y el resultado lo multiplicará por "z"

  x+y*z     En este caso no hay agrupación, por prioridad de operadores, primero se hace la multiplicación de "y*z"
            y al final se suma con "x"

  La prioridad de operadores sigue este orden: * / % + -

*/