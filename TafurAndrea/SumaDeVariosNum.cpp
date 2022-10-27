#include<iostream>
using namespace std;

int main () {
    float ASQT_x,ASQT_s=0.0;
    int ASQT_i=0, ASQT_l;
    cout<<"Ingrese el valor de NMAT_l: ";
    cin>>ASQT_l;
    do{
        cout<<"Ingrese el valor de NMAT_x: ";
        cin>>ASQT_x;
        ASQT_i=ASQT_i+1;
        ASQT_s=ASQT_s+ASQT_x;
    }while(ASQT_i<ASQT_l);

    cout <<"La suma de los numeros fue: "<<ASQT_s<<endl;
    return 0;

}
