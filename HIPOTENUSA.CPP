// CALCULO DE LA HIPOTENUSA DE NUMEROS POSITIVOS



#include <iostream>  // Biblioteca estandar que permite Entradas/Salidas en pantalla
#include <cmath>  // Biblioteca para funciones matematcias 

using namespace std;

int main () {

float cateto1, cateto2, hipotenusa;  // Declaracion de variables de tipo decimal

cout << "Calcular la Hipotenusa" << endl;

cout << "Ingrese la medida de los catetos A & B" << endl;  
cout << "Ingrese la medida del cateto A " << endl;     // Mensaje en pantalla
cin >> cateto1;     // captura del valor ingresado por el usuario
cout << "Ingrese la medida del cateto B " << endl;
cin >> cateto2;

//* Validar que los numeros ingresados sean positivos */

if ( cateto1 >0 && cateto2 >0) 

{
    hipotenusa = sqrt (pow (cateto1, 2.0) + pow ( cateto2, 2.0) );
    cout << " El valor de la hipotenusa es: "  <<hipotenusa <<endl;
}

else
    cout << "Por favor debe ingresar unicamente numeros positivos" << endl;
{

system("PAUSE");

}

}