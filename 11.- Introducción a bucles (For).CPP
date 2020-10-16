//Ciclos-Bucles o Loops

//Estructura de control iterativa precondicional: for

#include <stdio.h>                                         //Libreria para "printf()"
#include <conio.h>                                         //Libreria para "getch()"

void main()
{                                                          //Inicia la ejecución del programa
                                                           
 for(int i=0; i<6; i=i+1)                                  //Inicia bucle for. Contiene 3 instrucciones: Inicio, Condición e iteración
 {                                                         //Evalua condición.
  printf("Esta linea se imprime 6 veces\n");               //Imprime cadena en pantalla
  printf("Esta linea tambien.\n\n");                       //Imprime cadena en pantalla
 }                                                         //1.Realiza la iteración 2.Regresa a la línea de "for()" 3.Prueba la condición  

 getch();
}                                                          //Fin del rpograma

/*
 Estructura de control iterativa precondicional: "for"
 Ejecuta una sentencia o bloque de instrucciones de manera repetida siempre que una condición sea verdadera.

 for (Inicialización; Condición; Iteración)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 Partes que conforman un ciclo "for".

 Las instrucciones para este bucle se preestablecen en una línea y funcionan en éste orden:

 1. Inicialización: Sólo ocurre una vez, y es antes de ingresar al bucle (Asigna un valor inicial).
 2. Condición: Evalúa un "valor" y determina si es verdadero o falso; si es verdadero ejecuta el 
               grupo de instrucciones.
 3. Iteración: Asigna un nuevo valor de incremento o decremento al valor anterior.
 4. Finalmente, evalúa la condición para ejecutar o no nuevamente el bloque de instrucciones y 
    nuevamente itera, así sucesivamente.
 
 A diferencia de while, este loop(bucle) ya tiene predeterminado el número de veces que se repetirá 
 antes de ingresar a este mismo, mientras que while lo determina durante su ejecución.

 NOTA: Si for incluye una sola sentencia(línea) en su segmento, se puede omitir el uso de 
       llaves "{}", aplica igual para ciclo "while" y "do-while".

 Ejm:

 for (Inicialización; Condición; Iteración)
    Sentencia 1;
 

*/