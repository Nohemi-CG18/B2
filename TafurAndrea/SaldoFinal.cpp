#include <iostream>
using namespace std;
int main ()
{
	float ASQT_x,ASQT_s=0;
	int ASQT_i=0,ASQT_l;
	cout<<"Ingrese numero de egresos  ";cin>>ASQT_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>ASQT_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>ASQT_x;
	ASQT_i=ASQT_i+1;
	ASQT_s=ASQT_s-ASQT_x;

	}while(ASQT_i<ASQT_l);
	cout<<"El saldo final es: "<<ASQT_s<<endl;
	return 0;
}
