#include <iostream>
using namespace std;
int main () 
{
	float ASQT_imc,ASQT_peso,ASQT_altura;
	cout<<"Ingrese el peso (kg): ";cin>>ASQT_peso;
	cout<<"Ingrese la altura (metros): ";cin>>ASQT_altura;
	ASQT_imc=ASQT_peso/(ASQT_altura*ASQT_altura);
	if(ASQT_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(ASQT_imc>=18.5 && ASQT_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(ASQT_imc>=25 && ASQT_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(ASQT_imc>=27 && ASQT_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(ASQT_imc>=30 && ASQT_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(ASQT_imc>=35 && ASQT_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(ASQT_imc>=40 && ASQT_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(ASQT_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}
