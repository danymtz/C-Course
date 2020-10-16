#include <stdio.h>                         //Librería stdio: incluye la función "printf()" y "scanf()"

#include <conio.h>                         //Librería conio: incluye la función "getch()"

void main()
{                                          //Inicio del programa
 int numero;                               //Se instancía una variable del tipo int(entero), denominada "numero"

 printf("Dame un numero: ");               //Imprime petición de un número 

 scanf("%i", &numero);                     //Extrae mediante teclado
                                           //1."%i" especifica el tipo de dato que se va a extraer
                                           //2."&" proporciona la dirección de memoria de la variable "numero"
                                           //3.Finalmente, asigna el valor extraído a "numero"

 printf("Escribio el numero %i", numero);  //Imprime el valor de "numero"

 getch();                                  //Espera respuesta por teclado
}                                          //Fin del programa
/*
 Tipos de datos en C
 
 Identificador de tipo de dato --------- Tipo de dato -------- Identificador de extracción ------------------------ Bytes que ocupa en memoria

 bool----------------------------------> Entero (0 ó 1) ------> %i ó %d por ser un valor numerico entero (0 ó 1)---> 1
 char ---------------------------------> Caracter ------------> %c y %s para arreglo de caracter ------------------> 1
 signed char---------------------------> Caracter ------------> %c y %s para arreglo de caracter ------------------> 1
 unsigned char-------------------------> Caracter ------------> %c y %s para arreglo de caracter ------------------> 1
 short int ---- ó ----  short ---------> Entero --------------> %i ------------------------------------------------> 2
 unsigned short int--------------------> Entero --------------> %i ------------------------------------------------> 2
 int-----------------------------------> Entero --------------> %i ------------------------------------------------> 4
 unsigned int--------------------------> Entero --------------> %i ------------------------------------------------> 4
 long int ----- ó ----- long ----------> Entero --------------> %i ------------------------------------------------> 4
 unsigned long int---------------------> Entero --------------> %i ------------------------------------------------> 4
 float---------------------------------> Real ----------------> %f ------------------------------------------------> 4
 double--------------------------------> Real ----------------> %f ------------------------------------------------> 8

 */