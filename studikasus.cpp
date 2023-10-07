#include <iostream>
using namespace std;

int main()
{
    int jumlahTepung = 20000;
    int jumlahGula = 10000;
    int hargaDonat = 6000;
    int modal = 320000;
    int jumlahDonatTepung, jumlahDonatGula, jumlahDonat, keuntungan;

    jumlahDonatTepung = jumlahTepung / 500 * 10;
    jumlahDonatGula = jumlahGula / 100 * 10;

    jumlahDonat = (jumlahDonatTepung < jumlahDonatGula) ? jumlahDonatTepung : jumlahDonatGula;

    keuntungan = (jumlahDonat * 6000) - modal;
    cout << "Donat yang dapat dibuat adalah " << jumlahDonat << endl;
    cout << "Keuntungannya adalah Rp" << keuntungan << endl;
    return 0;
}
