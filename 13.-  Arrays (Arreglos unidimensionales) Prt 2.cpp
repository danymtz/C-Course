//Estructura est�tica unidimensional - Arreglo � Array (prt 2)

#include <stdio.h>                          //Librer�a para "printf()" y "scanf()"
#include <conio.h>                          //Librer�a para "getch()"

void main()
{                                           //Inicia  programa

 int num[5] = {56,34,8,2,13};               //Se instanc�a variable "num" con
                                            // 5 elementos de tipo int(entero)
                                            //Inicializada con los valores: 56,34,8,2,13

 int i;                                     //Se instanc�a variable "i" de tipo int(entero)
 
 for(i=0; i<5; i++)                          
 {                                          //Inicia ciclo "for" desde i=0, con incremento +1, hasta 4
  printf("\n %i", num[i]);                  //Imprime el valor de "num", en el �ndice "i"
 }                                          
 
 getch();                                   //Espera respuesta por teclado

}                                           //Fin del programa


/*
 Array (Arreglo)

 Se puede inicializar el valor de un arreglo sin tener que hacerlo por teclado
 
 Ejm:

 int numeros[3] = {0,6,100}
 char saludo[5] = {'H','O','L','A','0'}

 Cuando existe una inicializaci�n no siempre es necesario definir el tama�o del arreglo, ya que al
 inicializar el arreglo, el compilador se encarga de asignarle el tama�o.

 Ejm:

 float calif[] = {5.6, 9.8, 10, 7.5}

 En el caso anterior, el compilador asigna de manera automatica 4 elementos de tipo float a la
 variable "calif", pues ya se le espec�fico las variables que ocupar�.

 para mostrar los elementos de un arreglo no es muy eficiente mostrar uno por uno, pues eso lleva
 demasiado tiempo, se hace uso del ciclo "for" para que recorra uno por uno de los elementos con su
 iterador "i"

 Ejm:

 char saludo[5] = {'H','O','L','A','0'}

 for(int i=0; i<5; i++)
 printf("%c", saludo[i]);

 En este sentido la variable "i" actua como nuestro �ndice, y en la primera vuelta vale 0
 y despu�s incrementa en 1, e imprime el valor de de la variable en el indice 1, luego incrementa 
 en 1 y ahora "i" vale "2" e imprime el valor de de la variable en el indice 2, y as� sucesivamente
 hasta que se cumpla la condici�n "i<5"
 
*/