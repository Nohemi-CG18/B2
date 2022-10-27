#include <iostream>
using namespace std;
int main()
{
    float ASQT_x, ASQT_s = 0, ASQT_vb, ASQT_piva = 12, ASQT_viva, ASQT_pdesc = 10, ASQT_vdesc, ASQT_vn;
    int ASQT_i = 0, ASQT_l;
    cout << "Ingrese l: ";
    cin >> ASQT_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> ASQT_x;
        ASQT_i = ASQT_i + 1;
        ASQT_s = ASQT_s + ASQT_x;
    } while (ASQT_i < ASQT_l);
    ASQT_vb = ASQT_s;
    ASQT_viva = ASQT_vb * ASQT_piva / 100;
    ASQT_vdesc = ASQT_vb * ASQT_pdesc / 100;
    ASQT_vn = ASQT_vb + ASQT_viva - ASQT_vdesc;
    cout << "El valor a pagar es de: " << ASQT_vn << endl;
    return 0;
}
