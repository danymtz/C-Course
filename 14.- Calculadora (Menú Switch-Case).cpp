#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
main ()
{
empezar:
int Opcion;
cout<<"\t\t\t\tCalculadora\n\n\n\n";
cout<<"\t\tElija el tipo de operacion que desea hacer\n\n\n";
cout<<"1. Suma\n\n";
cout<<"2. Resta\n\n";
cout<<"3. Multiplicacion\n\n";
cout<<"4. Division\n\n";
cout<<"5. Salir del programa\n\n";
cin>>Opcion;
     switch (Opcion)
            {
            case 1:cout<<"Suma\n\n";
                  {
                  float b,a, suma;
                  cout<<"Ingrese un numero ";
                  cin>>b;
                  cout<<"Ingrese el numero a sumar ";
                  cin>>a;
                  suma=a+b;
                  cout<<"El resultado de la suma es: "<<suma<<endl;
                  }
                  break;
             case 2:cout<<"Resta\n\n";
                   {
                   float b,a, resta;
                   cout<<"Ingrese un numero: ";
                   cin>>a;
                   cout<<"Ingrese el numero a restar: ";
                   cin>>b;
                   resta=a-b;
                   cout<<"El resultado de la resta es: "<<resta<<"\n\n"<<endl;
                   }
                   break;
             case 3:cout<<"Multiplicacion\n\n";
                   {
                   float b,a, multiplicacion;
                   cout<<"Ingrese un numero: ";
                   cin>>b;
                   cout<<"Ingrese el numero a multiplicar: ";
                   cin>>a;
                   multiplicacion=a*b;
                   cout<<"El resultado de la multiplicacion es: "<<multiplicacion<<endl;
                   }
                   break;
             case 4:cout<<"Division\n\n";
                   {
                   float b,a, division;
                   cout<<"Ingrese un numero: ";
                   cin>>a;
                   cout<<"Ingrese otro numero: ";
                   cin>>b;
                   division=a/b;
                   cout<<"El resultado de la division es: "<<division<<endl;
                   }
                   break;
             case 5:exit(0);
             default: clrscr (0);
             cout<<"\n\n";
             cout<<"\t\tESE VALOR NO EXISTE EN EL MENU. Ingrese del 1 al 5\n\n"<<endl; goto empezar;
            }
getch ();
}

