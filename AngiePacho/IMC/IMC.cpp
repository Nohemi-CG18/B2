#include <iostream>
using namespace std;
int main () 
{
	float ADPA_imc,ADPA_peso,ADPA_altura;
	cout<<"Ingrese el peso (kg): ";cin>>ADPA_peso;
	cout<<"Ingrese la altura (metros): ";cin>>ADPA_altura;
	ADPA_imc=ADPA_peso/(ADPA_altura*ADPA_altura);
	if(ADPA_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(ADPA_imc>=18.5 && ADPA_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(ADPA_imc>=25 && ADPA_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(ADPA_imc>=27 && ADPA_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(ADPA_imc>=30 && ADPA_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(ADPA_imc>=35 && ADPA_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(ADPA_imc>=40 && ADPA_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(ADPA_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}