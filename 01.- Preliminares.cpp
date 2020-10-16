/*Estructura general de un programa económico en C.

 main()
 {
  //Sentencia 1;
  //Sentencia 2;
  //Sentencia n;
 }

////////////////////////////////////////////////////////////////////////////////

Estructura de control condicional if, else if, else en C

 if (condición)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 else if (condición)
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

 "else if" es un segmento alternativo que también incluye condicón en caso de
 de que "if" haya resultado falso. Se pueden usar tantos "else if" como el usuario desee

 "else" es un segmento alternativo que NO lleva condición, y este puede
 incluirse o no.

 NOTA: Si if, else if ó else sólo incluyen una sentencia(línea) en su segmento,
       se puede omitir el uso de llaves "{ }"

 Ejm:

 if (condición)
   Sentencia 1;

 else if (condición)
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

 "case" permite enumerar las posibilidades de ejecutar un segmento de código
 desde la línea en que éste se encuentra

 "break" termina las sentencias y sale de la estructura de control para seguir ejecutando
  código que esté fuera de esta

 "default" contiene las sentencias que siempre se ejecutaran simpre QUE NO se ejecute ningún "case"

//////////////////////////////////////////////////////////////////////////////////////////////////////


 CICLOS O BUCLES

/*
 Estructura de control precondicional
 
for (inicialización; condición; iteración)
   {
    Sentencias...
   }

*/

/*
 Estructura de control precondicional controlada por eventos

 while (condición)
 {
  Sentencias...
  Iteración
 }

*/


/*
 Estructura de control post-condicional controlada por eventos

 do
  {
   Sentencias...
   Iteración...
  }while(Condición);

*/

/*
 Anidamiento
 
 ifs aninados

*/

