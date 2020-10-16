//Estructura de control condicional multiple (switch-case)

#include <stdio.h>                                  //Librería para "printf()" y "scanf()"
#include <conio.h>                                  //Librería para "getch()"

void main()
{                                                   //Inicia  programa
 int a, b;                                          //Se instancía variable "a" y "b" del tipo int(entero)
 int opcion;                                        //Se instancía variable "opcion" del tipo int(entero)

 printf("Ingrese un numero: ");                     //Imprime petición de un número (a)
 scanf("%i", &a);                                   //Extrae ó escanea un valor para almacenar en "a"
 printf("Ingrese otro numero: ");                   //Imprime petición de otro número (b)
 scanf("%i", &b);                                   //Extrae ó escanea un valor para almacenar en "b"

 printf("\nSeleccione una opcion");                 //Imprime instrucción de seleccionar opción
 printf("\n1.Sumar los numeros");                   //Imprime opción 1, señalada con el "1"
 printf("\n2.Multiplicar los numeros\n");           //Imprime opción 2, señalada con el "2"

 scanf("%i", &opcion);                              //Extrae ó escanea un valor para almacenar en "opcion"

 switch(opcion)                                     //switch análiza y compara el valor de "opcion"
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

 "case" permite enumerar las posibilidades de ejecutar un bloque de código
 desde la línea en que éste se encuentra.

 "break" termina las sentencias y sale de la estructura de control para seguir ejecutando
  código que esté fuera de esta.

 "default" contiene las sentencias que se ejecutarán simpre QUE NO se ejecute ningún "case".

*/