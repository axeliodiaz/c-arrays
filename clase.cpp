// la compañia "BurguerSistemas" desea implementar un sistema para la ventana de sus productos, los cuales tiene los siguientes costos:                                                                                                     			Perro caliente 4Bs. 
//	Perro Caliente Especial 6Bs.
//	Hamburguesa 12Bs.
//	Nestea 2Bs.

//  La compañia desea que el sistema se ingrese la cantidad de cada producto comprado por el cliente y este le muestre el monto a pagar (con IVA incluido), ademas la compañia tiene las siguientes promociones:

//	Promocion 1: Con la compra de 2 perros tiene otro gratis.
//	Prommocion 2: Con la compra de un perro y una hambuergueza tienes un nestea gratis.

#include <iostream>
#include <stdlib.h>
using namespace std;
float mult (float nu, float va);
void menu ();	

float mult (float nu, float va){
	return (va*nu);
}

void menu (){
	cout<< "1.Perro Caliente\n";
    cout<< "2.Perro Caliente Especial\n";
	cout<< "3.Hamburguesa\n";
	cout<< "4.Nestea\n";
}


int main(){
	int PC= 4, PCE= 6, H=12, N=2, Opcion, num, var;
	char resp;
	do{
	menu();
	cin>> Opcion;
	
	switch (Opcion){
	
	case 1:
		var=4; 
		cout<< "Cuantos perros compro? ";
		cin>> num;
		mult(num, var);	
		cout<< "Algo mas?\n";
		cin>> resp;
		system ("clear");
		
	break;

	break;

	case 2:
		var=6;
		cout<< "Cuantos perros especiales compro? ";
		cin>> num; 
		mult(num, var);
		cout<< "Algo mas?\n";
		cin>> resp;
		system("clear");
		
	break;

	case 3:
		var=12;
		cout<< "Cuantas hamburguesas compro? ";
		cin>> num;
		mult(num, var);
		cout<< "Algo mas?\n";
		cin>> resp;
		system("clear");
		
	break;

	case 4:
		var=2;
		cout<< "Cuanto nestea compro? ";
		cin>> num;
		mult(num, var);
		cout<< "Algo mas?\n";
		cin>> resp;
		system("clear");
	break;
	}
	}while (resp=='S' || resp=='s');

return 0;
}

