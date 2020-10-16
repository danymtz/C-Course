#include <stdio.h>                         //Librer�a stdio: incluye la funci�n "printf()" y "scanf()"

#include <conio.h>                         //Librer�a conio: incluye la funci�n "getch()"

void main()
{                                          //Inicio del programa
 int numero;                               //Se instanc�a una variable del tipo int(entero), denominada "numero"

 printf("Dame un numero: ");               //Imprime petici�n de un n�mero 

 scanf("%i", &numero);                     //Extrae mediante teclado
                                           //1."%i" especifica el tipo de dato que se va a extraer
                                           //2."&" proporciona la direcci�n de memoria de la variable "numero"
                                           //3.Finalmente, asigna el valor extra�do a "numero"

 printf("Escribio el numero %i", numero);  //Imprime el valor de "numero"

 getch();                                  //Espera respuesta por teclado
}                                          //Fin del programa
/*
 Tipos de datos en C
 
 Identificador de tipo de dato --------- Tipo de dato -------- Identificador de extracci�n ------------------------ Bytes que ocupa en memoria

 bool----------------------------------> Entero (0 � 1) ------> %i � %d por ser un valor numerico entero (0 � 1)---> 1
 char ---------------------------------> Caracter ------------> %c y %s para arreglo de caracter ------------------> 1
 signed char---------------------------> Caracter ------------> %c y %s para arreglo de caracter ------------------> 1
 unsigned char-------------------------> Caracter ------------> %c y %s para arreglo de caracter ------------------> 1
 short int ---- � ----  short ---------> Entero --------------> %i ------------------------------------------------> 2
 unsigned short int--------------------> Entero --------------> %i ------------------------------------------------> 2
 int-----------------------------------> Entero --------------> %i ------------------------------------------------> 4
 unsigned int--------------------------> Entero --------------> %i ------------------------------------------------> 4
 long int ----- � ----- long ----------> Entero --------------> %i ------------------------------------------------> 4
 unsigned long int---------------------> Entero --------------> %i ------------------------------------------------> 4
 float---------------------------------> Real ----------------> %f ------------------------------------------------> 4
 double--------------------------------> Real ----------------> %f ------------------------------------------------> 8

 */