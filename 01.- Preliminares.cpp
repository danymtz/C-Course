/*Estructura general de un programa econ�mico en C.

 main()
 {
  //Sentencia 1;
  //Sentencia 2;
  //Sentencia n;
 }

////////////////////////////////////////////////////////////////////////////////

Estructura de control condicional if, else if, else en C

 if (condici�n)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 else if (condici�n)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 else
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 "if" compara valores para aprobarlos como verdadero o falso
 y decidir si ejecutar el segmento que incluye

 "else if" es un segmento alternativo que tambi�n incluye condic�n en caso de
 de que "if" haya resultado falso. Se pueden usar tantos "else if" como el usuario desee

 "else" es un segmento alternativo que NO lleva condici�n, y este puede
 incluirse o no.

 NOTA: Si if, else if � else s�lo incluyen una sentencia(l�nea) en su segmento,
       se puede omitir el uso de llaves "{ }"

 Ejm:

 if (condici�n)
   Sentencia 1;

 else if (condici�n)
   Sentencia 1;

 else
   Sentencia 1;

/////////////////////////////////////////////////////////////////////////////////////////

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

 "switch" analiza y compara un valor para ejecutar sentencias

 "case" permite enumerar las posibilidades de ejecutar un segmento de c�digo
 desde la l�nea en que �ste se encuentra

 "break" termina las sentencias y sale de la estructura de control para seguir ejecutando
  c�digo que est� fuera de esta

 "default" contiene las sentencias que siempre se ejecutaran simpre QUE NO se ejecute ning�n "case"

//////////////////////////////////////////////////////////////////////////////////////////////////////


 CICLOS O BUCLES

/*
 Estructura de control precondicional
 
for (inicializaci�n; condici�n; iteraci�n)
   {
    Sentencias...
   }

*/

/*
 Estructura de control precondicional controlada por eventos

 while (condici�n)
 {
  Sentencias...
  Iteraci�n
 }

*/


/*
 Estructura de control post-condicional controlada por eventos

 do
  {
   Sentencias...
   Iteraci�n...
  }while(Condici�n);

*/

/*
 Anidamiento
 
 ifs aninados

*/

