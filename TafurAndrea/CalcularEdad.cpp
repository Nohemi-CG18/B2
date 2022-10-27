


#include <iostream>
using namespace std;
int main()
{
    int ASQT_aa, ASQT_ma, ASQT_da, ASQT_an, ASQT_mn, ASQT_dn, ASQT_a, ASQT_m, ASQT_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> ASQT_aa >> ASQT_ma >> ASQT_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> ASQT_an >> ASQT_mn >> ASQT_dn;

    if (ASQT_da > ASQT_dn)
    {

        ASQT_d = ASQT_da - ASQT_dn;
    }
    else
    {
        ASQT_da = ASQT_da + 30;
        ASQT_ma = ASQT_ma - 1;
        ASQT_d = ASQT_da - ASQT_dn;
    }

    if (ASQT_ma > ASQT_mn)
    {

        ASQT_m = ASQT_ma - ASQT_mn;
    }
    else
    {

        ASQT_ma = ASQT_ma + 12;
        ASQT_aa = ASQT_aa - 1;
        ASQT_m = ASQT_ma - ASQT_mn;
    }
    ASQT_a = ASQT_aa - ASQT_an;

    cout << "Usted tiene " << ASQT_a << " años, " << ASQT_m << " meses," << ASQT_d << " dias" << endl;
    return 0;
}
