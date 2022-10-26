#include<iostream>
using namespace std;

int main () {
    float ADPA_x,ADPA_s=0.0;
    int ADPA_i=0, ADPA_l;
    cout<<"Ingrese el valor de NMAT_l: ";
    cin>>ADPA_l;
    do{
        cout<<"Ingrese el valor de NMAT_x: ";
        cin>>ADPA_x;
        ADPA_i=ADPA_i+1;
        ADPA_s=ADPA_s+ADPA_x;
    }while(ADPA_i<ADPA_l);

    cout <<"La suma de los numeros fue: "<<ADPA_s<<endl;
    return 0;

}