//Ciclos-Bucles o loops

//Estructura de control iterativa controlada por eventos: do-while ó
//Estructura de control postcondicional controlada por eventos: do-while


#include <stdio.h>                                          //Libreria para "printf()" y "scanf()"
#include <conio.h>                                          //Libreria para "getch()"

void main()                                                 
{                                                           //Inicia programa
 int num;                                                   //Se instancía variable "num" del tipo entero(int)

 do                                                         //Introduce al bucle de manera automática
  {                                                         //Inicia ejecución de este bloque de instrucciones
   printf("Se ha ingresado al bucle: \n");                  //Imprime notificación de entrada al bucle
   printf("por lo menos en esta ocasion. \n\n");            //Se ejecutará por lo menos una vez
   printf("Para salir teclee un numero mayor a 5: ");     //Imprime petición de un número mayor a 5

   scanf("%i", &num);                                       //Extrae un valor y lo almacena en "num" (determina la iteración)
  }while(num < 5);                                          //Condición: si el valor de "num" es menor que 5: regresa la línea de "do"

  printf("Estas fuera del bucle");                          //Imprime notificación de salida del bucle

  getch();                                                  //Espera respuesta por teclado
}                                                           //Fin del programa

/*
 Se dice que un bucle es postcondicional porque primero ejecuta un bloque de instrucciones contenido en
 su cuerpo y después evalua una condición para ejecutarlas de nuevo o no.

 Estructura de control iterativa controlada por eventos: "do-while"
 Ejecuta una sentencia o bloque de instrucciones y luego evalua una condición para volver a ejecutarlos.


 do
 {
   Sentancia 1;
   Sentencia 2;
   Sentencia n;
   Asignación e iteración;
 }while(Condición);


 do: Ejecuta todas las instrucciones precedidas de este identificador hasta llegar a la condición.
 Condición: Expresión lógica para determinar si es verdadero o falso.
            Si es verdadero: Ejecuta nuevamente el bloque de instrucciones.
            Si es falso: No ejecuta el bloque de instrucciones y continúa con el flujo de instrucciones del programa.

 Asignación e iteración: Controla el número de veces que se ejecutará nuevamente el bloque y posteriormente evaluar en "while(Concición);".

 Para que se ejecute de nuevo el bloque de instrucciones la condición tiene que ser verdadera.

 NOTA: La diferencia entre "while" y "do-while" es que, "do-while" ejecutará las instrucciones por lo menos una vez y luego evalua una
       condición para volverlas a ejecutar; a diferencia de "while" que, primero evalua una condición y luego ejecuta o no las instrucciones.

      while : Evalua una condición y luego ejecuta instrucciones.
      do-while: Ejecuta las intrucciones y luego evalua condición. 
*/

