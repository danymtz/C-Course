//Ciclos-Bucles o loops

//Estructura de control iterativa controlada por eventos (while) �
//Estructura de control precondicional controlada por eventos (while)


#include <stdio.h>                                      //Libreria para "printf()" y "scanf()"
#include <conio.h>                                      //Libreria para "getch()"

void main()
{                                                       //Inicia programa
 int a;                                                 //Se instanc�a variable "a" del tipo entero(int)

 printf("Teclee un numero menor a 10: ");               //Imprime petici�n de un numero menor a 10
 scanf("%i", &a);                                       //Extrae � escanea un valor para almacenar en "a"

 while(a < 10)                                          //Condici�n: si el valor de "a" es menor que 10:
 {                                                      //Si la condici�n es verdadera, se ejecuta este bloque de instrucciones
  printf("Estas dentro del bucle\n");                   //Imprime notificaci�n de entrada al bucle
  printf("Teclee de nuevo un numero menor a 10: ");     //Imprime nuevamente petici�n de un n�mero menor a 10
  scanf("%i", &a);                                      //Extrae un nuevo valor y lo almacena en "a" (determina la iteraci�n)
 }                                                      //Regresa a la linea de "while(a < 10)" y comprueba la condici�n

 printf("Estas fuera del bucle");                       //Imprime notificaci�n de salida del bucle

 getch();                                               //Espera respuesta por teclado

}                                                       //Fin del programa

/*
 El objetivo de los ciclos o bucles es ejecutar cierto bloque de instrucciones de manera repetida.
 Se dice que es precondicional porque primero evalua una condici�n y despu�s ejecuta � no un bloque de instrucciones.

 Estructura de control iterativa controlada por eventos: while
 Ejecuta una sentencia o bloque de instrucciones siempre que una condici�n sea verdadera.

 
 while (Condici�n)
 {
   Sentancia 1;
   Sentencia 2;
   Sentencia n;
   Asignaci�n e iteraci�n;
 }

 Condici�n: Expresi�n l�gica que determina si es verdadero o falso.
            Si es verdadero: Ejecuta bloque de instrucciones.
            Si es falso: No ejecuta el bloque de instrucciones y contin�a con el flujo de instrucciones del programa.
 
 Asignaci�n e iteraci�n: Controla el n�mero de veces que se ejecutar� el bloque y posteriormente evaluar en "while(Concici�n)".

 Para que se ejecute el bloque de instrucciones la condici�n tiene que ser verdadera.
 Cuando se terminan de ejecutar las instrucciones dentro del bloque, regresa a la l�nea de condici�n para evaluarla nuevamente.
*/

