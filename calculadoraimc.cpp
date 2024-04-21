#include <iostream>
using namespace std;

int main (){
string nombre;
float peso;
float altura;
int IMC = 0;

cout << "INGRESE SU NOMBRE";
cin >> nombre;
cout << "INGRESE SU PESO";
cin >> peso;
cout <<"INGRESE SU ALTURA";
cin >> altura;

IMC = (peso/(altura*altura));
cout << nombre << " SU INDICE DE MASA CORPORAL ES DE " << IMC;

return 0;
}
