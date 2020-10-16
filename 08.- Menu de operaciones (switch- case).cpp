//Estructura de control condicional multiple (switch-case)

#include <stdio.h>                                  //Librer�a para "printf()" y "scanf()"
#include <conio.h>                                  //Librer�a para "getch()"

void main()
{                                                   //Inicia  programa
 int a, b;                                          //Se instanc�a variable "a" y "b" del tipo int(entero)
 int opcion;                                        //Se instanc�a variable "opcion" del tipo int(entero)

 printf("Ingrese un numero: ");                     //Imprime petici�n de un n�mero (a)
 scanf("%i", &a);                                   //Extrae � escanea un valor para almacenar en "a"
 printf("Ingrese otro numero: ");                   //Imprime petici�n de otro n�mero (b)
 scanf("%i", &b);                                   //Extrae � escanea un valor para almacenar en "b"

 printf("\nSeleccione una opcion");                 //Imprime instrucci�n de seleccionar opci�n
 printf("\n1.Sumar los numeros");                   //Imprime opci�n 1, se�alada con el "1"
 printf("\n2.Multiplicar los numeros\n");           //Imprime opci�n 2, se�alada con el "2"

 scanf("%i", &opcion);                              //Extrae � escanea un valor para almacenar en "opcion"

 switch(opcion)                                     //switch an�liza y compara el valor de "opcion"
 {                                                  //Inicia estructura de control
  case 1:                                           //Si el valor de "opcion" coincide con "1" se ...
            printf("La suma es: %i", a+b);          // ... ejecutan las sentencias desde el bloque de "case 1"
            break;                                  //"break" termina la estructura de control y sale de esta
  
  case 2:                                           //Si el valor de "opcion" coincide con "2" se ...
            printf("El producto es: %i", a*b);      // ... ejecutan las sentencias desde el bloque de "case 2"
            break;                                  //"break" termina la estructura de control y sale de esta

  default:  printf("\nOpcion no valida");           //Si el valor de "opcion"  no coincide con ...
                                                    // ... ningun "case", se ejecuta siempre el bloque de "default"
 }                                                  //Fin de estructura de control

 getch();                                           //Espera respuesta por teclado

}                                                   //Fin del programa

/*

 Estructura de control condicional multiple en C
 switch-case

 switch(valor)
 {
  case 1:
         Sentencia 1;
         Sentencia 2;
         Sentencia n;
         break;
  case 2:
         Sentencia 1;
         Sentencia 2;
         Sentencia n;
         break;
  case 3:
         Sentencia 1;
         Sentencia 2;
         Sentencia n;
         break;
  case n:
         Sentencia 1;
         Sentencia 2;
         Sentencia n;
         break;
  default:
         Sentencia por defecto;
 }

 "switch" analiza y compara un valor para ejecutar sentencias.

 "case" permite enumerar las posibilidades de ejecutar un bloque de c�digo
 desde la l�nea en que �ste se encuentra.

 "break" termina las sentencias y sale de la estructura de control para seguir ejecutando
  c�digo que est� fuera de esta.

 "default" contiene las sentencias que se ejecutar�n simpre QUE NO se ejecute ning�n "case".

*/