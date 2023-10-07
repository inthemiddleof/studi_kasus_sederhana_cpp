#include <iostream>
using namespace std;

int main()
{

    int soto = 18000;
    int sate = 22500;
    int ayamBakar = 20000;
    int jusMangga = 10000;
    int esTeh = 5000;
    int kopi = 7000;
    int pilihan, jumlah, harga, jarak, ongkir, totalHarga;
    int hargaSebelumOngkir = 0;
    int totalJumlah = 0;
    char perulangan;
    cout << "******************************************************************************" << endl;
    cout << "                     Selamat Datang di resto online MARIMAKAN                     " << endl;
    cout << "******************************************************************************" << endl;

    do
    {
        cout << "Berikut ialah pilihan menu yang tersedia:" << endl;
        cout << "1. Soto Rp18.000" << endl;
        cout << "2. Sate Rp22.500" << endl;
        cout << "3. Ayam Bakar Rp20.000" << endl;
        cout << "4. Jus mangga Rp10.000" << endl;
        cout << "5. Es teh Rp5.000" << endl;
        cout << "6. Kopi Rp7.000" << endl;

        cout << "Pilih yang mana? " << endl;
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            cout << "Anda memilih soto dengan harga Rp18.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * soto;
            break;
        case 2:
            cout << "Anda memilih sate dengan harga Rp22.500" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * sate;
            break;
        case 3:
            cout << "Anda memilih ayam bakar dengan harga Rp20.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * ayamBakar;
            break;
        case 4:
            cout << "Anda memilih jus mangga dengan harga Rp10.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * jusMangga;
            break;
        case 5:
            cout << "Anda memilih es teh dengan harga Rp5.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * esTeh;
            break;
        default:
            cout << "Anda memilih kopi dengan harga Rp7.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * kopi;
            break;
        }
        hargaSebelumOngkir += harga;
        totalJumlah += jumlah;
        cout << "Apakah ingin membeli makanan atau minuman tambahan? (y/t)";
        cin >> perulangan;
    } while (perulangan == 'y');

    cout << "Masukan jarak dalam meter: ";
    cin >> jarak;

    if (jarak < 5000)
    {
        if (hargaSebelumOngkir >= 30000)
        {
            ongkir = 9500 * (1 - 0.1);
        }
        ongkir = 9500;
    }
    else if (jarak >= 5000 && jarak <= 10000)
    {
        if (hargaSebelumOngkir >= 30000)
        {
            ongkir = 12500 * (1 - 0.1);
        }
        ongkir = 12500;
    }
    else
    {
        if (hargaSebelumOngkir >= 30000)
        {
            ongkir = 15000 * (1 - 0.1);
        }
        ongkir = 15000;
    };

    totalHarga = hargaSebelumOngkir + ongkir;
    cout << "Total harga makanan atau minuman Rp" << hargaSebelumOngkir << endl;
    cout << "Total ongkir Rp" << ongkir << endl;
    cout << "Total yang harus dibayarkan adalah Rp" << totalHarga << endl;

    return 0;
}