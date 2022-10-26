
#include <iostream>
using namespace std;
int main()
{
    float ADPA_x, ADPA_s = 0, ADPA_vb, ADPA_piva = 12, ADPA_viva, ADPA_pdesc = 10, ADPA_vdesc, ADPA_vn;
    int ADPA_i = 0, ADPA_l;
    cout << "Ingrese l: ";
    cin >> ADPA_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> ADPA_x;
        ADPA_i = ADPA_i + 1;
        ADPA_s = ADPA_s + ADPA_x;
    } while (ADPA_i < ADPA_l);
    ADPA_vb = ADPA_s;
    ADPA_viva = ADPA_vb * ADPA_piva / 100;
    ADPA_vdesc = ADPA_vb * ADPA_pdesc / 100;
    ADPA_vn = ADPA_vb + ADPA_viva - ADPA_vdesc;
    cout << "El valor a pagar es de: " << ADPA_vn << endl;
    return 0;
}