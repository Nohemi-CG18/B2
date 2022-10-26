#include <iostream>
using namespace std;
int main()
{
    int ADPA_aa, ADPA_ma, ADPA_da, ADPA_an, ADPA_mn, ADPA_dn, ADPA_a, ADPA_m, ADPA_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> ADPA_aa >> ADPA_ma >> ADPA_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> ADPA_an >> ADPA_mn >> ADPA_dn;

    if (ADPA_da > ADPA_dn)
    {

        ADPA_d = ADPA_da - ADPA_dn;
    }
    else
    {
        ADPA_da = ADPA_da + 30;
        ADPA_ma = ADPA_ma - 1;
        ADPA_d = ADPA_da - ADPA_dn;
    }

    if (ADPA_ma > ADPA_mn)
    {

        ADPA_m = ADPA_ma - ADPA_mn;
    }
    else
    {

        ADPA_ma = ADPA_ma + 12;
        ADPA_aa = ADPA_aa - 1;
        ADPA_m = ADPA_ma - ADPA_mn;
    }
    ADPA_a = ADPA_aa - ADPA_an;

    cout << "Usted tiene " << ADPA_a << " años, " << ADPA_m << " meses," << ADPA_d << " dias" << endl;
    return 0;
}