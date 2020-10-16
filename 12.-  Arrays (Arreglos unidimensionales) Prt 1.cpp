//Estructura estática unidimensional - Arreglo ó Array

#include <stdio.h>                                //Librería para "printf()" y "scanf()"
#include <conio.h>                                //Librería para "getch()"

void main()
{                                                 //Inicia  programa  
 int arreglo[3];                                  //Se instancía variable "arreglo" con 
                                                  // 3 elementos de tipo int(entero)

 arreglo[0] = 20;                                 //Almacena en "arreglo" el valor 20, en el índice "0"
 arreglo[1] = 30;                                 //Almacena en "arreglo" el valor 30, en el índice "1"
 arreglo[2] = 40;                                 //Almacena en "arreglo" el valor 40, en el índice "2"

 printf("\nDato 0: %i", arreglo[0]);              //Imprime el valor de "arreglo", en el índice "0"
 printf("\nDato 1: %i", arreglo[1]);              //Imprime el valor de "arreglo", en el índice "1"
 printf("\nDato 2: %i", arreglo[2]);              //Imprime el valor de "arreglo", en el índice "2"

 getch();                                         //Espera respuesta por teclado

}                                                 //Fin del programa


/*

 Array (Arreglo)

 En muchas ocasiones se requieren variables adicionales, tales como una secuencia de datos que pueden
 representar una sucesión de calificaciones, edades, peso, estaturas, etc. Y una sola variable no es 
 eficiente para dicha información, por lo que se requiere el uso de más variables para almacenar
 aquellas enumeraciones. 
  
 •Un arreglo es una secuencia de datos del mismo tipo.

 •Los elementos contenidos en el arreglo tienen el mismo nombre.

 Cómo instanciar un arreglo:

  Tipo Nombre[Tamaño];

  Tipo: Se refiere al tipo de dato (int, char, float, etc).
  Nombre: Nombre de la variable.
  [ ] : En este espacio se debe especificar el tamaño del arreglo (cantidad de elementos).
  Tamaño: Valor numerico que determina la cantidad de elementos para la variable.

  Ejm:

  char letras[6];
  float cantidad[5];
  int variable[100];

 •Para diferenciar cada elemento del arreglo se usan índices.
 
 Un índice es un valor numerico que indica la posición de un elemento.
 Cada elemento del arreglo es una variable individual.

 Ejm:
 
 char variable[4];
 variable[3] = 'R';

 El número "3" es el índice que especifica la posición de un elemento del arreglo que 
 ahora contiene la letra "R".
 
*/