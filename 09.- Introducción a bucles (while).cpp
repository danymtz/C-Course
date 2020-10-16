//Ciclos-Bucles o loops

//Estructura de control iterativa controlada por eventos (while) ó
//Estructura de control precondicional controlada por eventos (while)


#include <stdio.h>                                      //Libreria para "printf()" y "scanf()"
#include <conio.h>                                      //Libreria para "getch()"

void main()
{                                                       //Inicia programa
 int a;                                                 //Se instancía variable "a" del tipo entero(int)

 printf("Teclee un numero menor a 10: ");               //Imprime petición de un numero menor a 10
 scanf("%i", &a);                                       //Extrae ó escanea un valor para almacenar en "a"

 while(a < 10)                                          //Condición: si el valor de "a" es menor que 10:
 {                                                      //Si la condición es verdadera, se ejecuta este bloque de instrucciones
  printf("Estas dentro del bucle\n");                   //Imprime notificación de entrada al bucle
  printf("Teclee de nuevo un numero menor a 10: ");     //Imprime nuevamente petición de un número menor a 10
  scanf("%i", &a);                                      //Extrae un nuevo valor y lo almacena en "a" (determina la iteración)
 }                                                      //Regresa a la linea de "while(a < 10)" y comprueba la condición

 printf("Estas fuera del bucle");                       //Imprime notificación de salida del bucle

 getch();                                               //Espera respuesta por teclado

}                                                       //Fin del programa

/*
 El objetivo de los ciclos o bucles es ejecutar cierto bloque de instrucciones de manera repetida.
 Se dice que es precondicional porque primero evalua una condición y después ejecuta ó no un bloque de instrucciones.

 Estructura de control iterativa controlada por eventos: while
 Ejecuta una sentencia o bloque de instrucciones siempre que una condición sea verdadera.

 
 while (Condición)
 {
   Sentancia 1;
   Sentencia 2;
   Sentencia n;
   Asignación e iteración;
 }

 Condición: Expresión lógica que determina si es verdadero o falso.
            Si es verdadero: Ejecuta bloque de instrucciones.
            Si es falso: No ejecuta el bloque de instrucciones y continúa con el flujo de instrucciones del programa.
 
 Asignación e iteración: Controla el número de veces que se ejecutará el bloque y posteriormente evaluar en "while(Concición)".

 Para que se ejecute el bloque de instrucciones la condición tiene que ser verdadera.
 Cuando se terminan de ejecutar las instrucciones dentro del bloque, regresa a la línea de condición para evaluarla nuevamente.
*/

