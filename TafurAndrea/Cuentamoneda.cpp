#include <iostream>
using namespace std;
int main ()
{
	float ASQT_x,ASQT_s=0,ASQT_s1=0,ASQT_s5=0;
	int ASQT_i=0,ASQT_l,ASQT_i1=0,ASQT_i5=0;
	cout<<"Ingrese l: ";cin>>ASQT_l;
	do{

	cout<<"Ingrese x: ";cin>>ASQT_x;
	ASQT_i=ASQT_i+1;
	ASQT_s=ASQT_s+ASQT_x;
	if(ASQT_x==1){
		ASQT_i1=ASQT_i1+1;
		ASQT_s1=ASQT_s1+ASQT_x;
	}else{

		ASQT_i5=ASQT_i5+1;
		ASQT_s5=ASQT_s5+ASQT_x;
	}

	}while(ASQT_i<ASQT_l);
	cout<<"La cantidad de monedas es: "<<ASQT_i<<endl;
	cout<<"El valor es: "<<ASQT_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<ASQT_i1<<endl;
	cout<<"El valor es: "<<ASQT_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<ASQT_i5<<endl;
	cout<<"La cantidad de moneda es: "<<ASQT_s5<<endl;
	return 0;
}
