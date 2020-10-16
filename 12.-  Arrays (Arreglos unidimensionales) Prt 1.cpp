//Estructura est�tica unidimensional - Arreglo � Array

#include <stdio.h>                                //Librer�a para "printf()" y "scanf()"
#include <conio.h>                                //Librer�a para "getch()"

void main()
{                                                 //Inicia  programa  
 int arreglo[3];                                  //Se instanc�a variable "arreglo" con 
                                                  // 3 elementos de tipo int(entero)

 arreglo[0] = 20;                                 //Almacena en "arreglo" el valor 20, en el �ndice "0"
 arreglo[1] = 30;                                 //Almacena en "arreglo" el valor 30, en el �ndice "1"
 arreglo[2] = 40;                                 //Almacena en "arreglo" el valor 40, en el �ndice "2"

 printf("\nDato 0: %i", arreglo[0]);              //Imprime el valor de "arreglo", en el �ndice "0"
 printf("\nDato 1: %i", arreglo[1]);              //Imprime el valor de "arreglo", en el �ndice "1"
 printf("\nDato 2: %i", arreglo[2]);              //Imprime el valor de "arreglo", en el �ndice "2"

 getch();                                         //Espera respuesta por teclado

}                                                 //Fin del programa


/*

 Array (Arreglo)

 En muchas ocasiones se requieren variables adicionales, tales como una secuencia de datos que pueden
 representar una sucesi�n de calificaciones, edades, peso, estaturas, etc. Y una sola variable no es 
 eficiente para dicha informaci�n, por lo que se requiere el uso de m�s variables para almacenar
 aquellas enumeraciones. 
  
 �Un arreglo es una secuencia de datos del mismo tipo.

 �Los elementos contenidos en el arreglo tienen el mismo nombre.

 C�mo instanciar un arreglo:

  Tipo Nombre[Tama�o];

  Tipo: Se refiere al tipo de dato (int, char, float, etc).
  Nombre: Nombre de la variable.
  [ ] : En este espacio se debe especificar el tama�o del arreglo (cantidad de elementos).
  Tama�o: Valor numerico que determina la cantidad de elementos para la variable.

  Ejm:

  char letras[6];
  float cantidad[5];
  int variable[100];

 �Para diferenciar cada elemento del arreglo se usan �ndices.
 
 Un �ndice es un valor numerico que indica la posici�n de un elemento.
 Cada elemento del arreglo es una variable individual.

 Ejm:
 
 char variable[4];
 variable[3] = 'R';

 El n�mero "3" es el �ndice que especifica la posici�n de un elemento del arreglo que 
 ahora contiene la letra "R".
 
*/