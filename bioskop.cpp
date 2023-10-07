#include <iostream>

using namespace std;
int main()
{

    int pilihanFilm, usia, jumlahTiket, pilihan, tiket, harga, kategori;
    int totalHarga = 0;
    int totalTiket = 0;
    char perulangan;
    cout << "************************************************************************" << endl;
    cout << "                     Selamat Datang di Bioskop XXII                     " << endl;
    cout << "************************************************************************" << endl;
    cout << "Perhatikan kategori usia di bawah ini!" << endl;
    cout << "1. 0-12 tahun termasuk anak-anak" << endl;
    cout << "2. 13-16 tahun termasuk remaja" << endl;
    cout << "3. 17 tahun keatas termasuk dewasa" << endl;

    cout << "Berapa umur anda: ";
    cin >> usia;
    if (usia <= 12)
    {
        cout << "Anda termasuk usia anak-anak" << endl;
        kategori = 1;
    }
    else if (usia > 12 && usia < 17)
    {
        cout << "Anda termasuk usia remaja" << endl;
        kategori = 2;
    }
    else
    {
        cout << "Anda termasuk dewasa" << endl;
        kategori = 3;
    }

    do
    {
        switch (kategori)
        {
        case 1:
            cout << "Pilihan film yang bisa anda lihat adalah: " << endl;
            cout << "1.UP" << endl;
            cout << "2.Toy Story" << endl;
            break;
        case 2:
            cout << "Pilihan film yang bisa anda lihat adalah: " << endl;
            cout << "1.UP" << endl;
            cout << "2.Toy Story" << endl;
            cout << "3. Harry Potter" << endl;
            break;
        case 3:
            cout << "Pilihan film yang bisa anda lihat adalah: " << endl;
            cout << "1.UP" << endl;
            cout << "2.Toy Story" << endl;
            cout << "3.Harry Potter" << endl;
            cout << "4.Titanic" << endl;
            break;
        default:
            break;
        }

        cout << "Masukan film yang ingin anda pilih: " << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Anda memilih film UP" << endl;
            cout << "Berapa tiket yang ingin anda beli: ";
            cin >> tiket;
            harga = tiket * 45000;
            break;
        case 2:
            cout << "Anda memilih film Toy Story" << endl;
            cout << "Berapa tiket yang ingin anda beli: ";
            cin >> tiket;
            harga = tiket * 45000;
            break;
        case 3:
            cout << "Anda memilih film Harry Poter" << endl;
            cout << "Berapa tiket yang ingin anda beli: ";
            cin >> tiket;
            harga = tiket * 65000;
            break;
        case 4:
            cout << "Anda memilih film Titanic" << endl;
            cout << "Berapa tiket yang ingin anda beli: ";
            cin >> tiket;
            harga = tiket * 80000;
        default:
            break;
        }
        totalTiket += tiket;
        totalHarga += harga;
        cout << "Apakah anda ingin membeli tiket yang lain? (y/t)" << endl;
        cin >> perulangan;
    } while (perulangan == 'y');

    cout << "Jumlah tiket yang anda pesan adalah: " << totalTiket << endl;
    cout << "Total harga yang harus anda bayarkan adalah Rp" << totalHarga << endl;
    return 0;
}