#include <iostream>
using namespace std;
int main ()
{
	float ADPA_x,ADPA_s=0;
	int ADPA_i=0,ADPA_l;
	cout<<"Ingrese numero de egresos  ";cin>>ADPA_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>ADPA_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>ADPA_x;
	ADPA_i=ADPA_i+1;
	ADPA_s=ADPA_s-ADPA_x;

	}while(ADPA_i<ADPA_l);
	cout<<"El saldo final es: "<<ADPA_s<<endl;
	return 0;
}