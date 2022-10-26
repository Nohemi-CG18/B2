#include <iostream>
using namespace std;
int main ()
{
	float ADPA_x,ADPA_pm=0;
	int ADPA_i=0,ADPA_l;
	cout<<"Ingrese l: ";cin>>ADPA_l;
	do{
	
	cout<<"Ingrese x: ";cin>>ADPA_x;
	ADPA_i=ADPA_i+1;
	if(ADPA_x>ADPA_pm){
		ADPA_pm=ADPA_x;
	}
	
	}while(ADPA_i<ADPA_l);
	cout<<"El promedio maximo del curso es: "<<ADPA_pm<<endl;
	return 0;
}