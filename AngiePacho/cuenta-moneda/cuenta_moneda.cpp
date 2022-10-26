#include <iostream>
using namespace std;
int main ()
{
	float ADPA_x,ADPA_s=0,ADPA_s1=0,ADPA_s5=0;
	int ADPA_i=0,ADPA_l,ADPA_i1=0,ADPA_i5=0;
	cout<<"Ingrese l: ";cin>>ADPA_l;
	do{

	cout<<"Ingrese x: ";cin>>ADPA_x;
	ADPA_i=ADPA_i+1;
	ADPA_s=ADPA_s+ADPA_x;
	if(ADPA_x==1){
		ADPA_i1=ADPA_i1+1;
		ADPA_s1=ADPA_s1+ADPA_x;
	}else{

		ADPA_i5=ADPA_i5+1;
		ADPA_s5=ADPA_s5+ADPA_x;
	}

	}while(ADPA_i<ADPA_l);
	cout<<"La cantidad de monedas es: "<<ADPA_i<<endl;
	cout<<"El valor es: "<<ADPA_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<ADPA_i1<<endl;
	cout<<"El valor es: "<<ADPA_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<ADPA_i5<<endl;
	cout<<"La cantidad de moneda es: "<<ADPA_s5<<endl;
	return 0;
}