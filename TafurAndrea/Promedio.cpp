#include <iostream>
using namespace std;
int main ()
{
	float ASQT_x,ASQT_pm=0;
	int ASQT_i=0,ASQT_l;
	cout<<"Ingrese l: ";cin>>ASQT_l;
	do{
	
	cout<<"Ingrese x: ";cin>>ASQT_x;
	ASQT_i=ASQT_i+1;
	if(ASQT_x>ASQT_pm){
		ASQT_pm=ASQT_x;
	}
	
	}while(ASQT_i<ASQT_l);
	cout<<"El promedio maximo del curso es: "<<ASQT_pm<<endl;
	return 0;
}
