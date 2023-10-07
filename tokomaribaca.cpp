#include <iostream>
using namespace std;

int main()
{
    // Variabel
    int harga, jumlah, pembayaran, kembalian, pilihan;
    int hargaTotal = 0;
    int jumlahTotal = 0;
    char perulangan;

    cout << "******************************************************************************" << endl;
    cout << "                     Selamat Datang di Toko Buku MARIBACA                     " << endl;
    cout << "******************************************************************************" << endl;
    cout << "Kami sedang mengadakan diskon diantaranya:" << endl;
    cout << "1.Setiap pembelian Buku seharga Rp100.000 atau lebih, akan mendapat diskon 7%" << endl;
    cout << "2.Setiap pembelian Buku seharga Rp150.000-Rp250.000, akan mendapat diskon 10%" << endl;
    cout << "3.Setiap pembelian Buku lebih dari Rp250.000, akan mendapat diskon 12%" << endl;
    cout << "******************************************************************************" << endl;
    // Perulangan
    do
    {
        cout << "Berikut ialah pilihan buku yang tersedia:" << endl;
        cout << "1. Buku Garis Waktu dengan harga Rp80.000" << endl;
        cout << "2. Buku Filosofi Teras dengan harga Rp80.000" << endl;
        cout << "3. Buku Struktur Data c++ dengan harga Rp150.000" << endl;
        cout << "4. Buku Sejarah Filsafat Barat dengan harga Rp150.000" << endl;
        cout << "5. Buku Geopolitik dan Hubungan Internasional dengan harga Rp250.000" << endl;
        cout << "******************************************************************************" << endl;

        // Mulai memilih buku sesuai yang diinginkan
        cout << "Pilih buku yang ingin dibeli dengan memasukan nomor buku sesuai dengan urutan di atas: ";
        cin >> pilihan;
        // Pengkondisian buku yang dipilih
        switch (pilihan)
        {
        case 1:
            cout << "Anda memilih buku Garis Waktu dengan harga Rp80.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * 80000;
            break;
        case 2:
            cout << "Anda memilih buku Filosofi Teras dengan harga Rp80.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * 80000;
            break;
        case 3:
            cout << "Anda memilih buku Struktur Data c++ dengan harga Rp150.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * 150000;
            break;
        case 4:
            cout << "Anda memilih buku Sejarah Filsafat Barat dengan harga Rp150.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * 150000;
            break;
        default:
            cout << "Anda memilih buku Geopolitik dan Hubungan Internasional dengan harga Rp250.000" << endl;
            cout << "Berapa banyak yang ingin anda beli: ";
            cin >> jumlah;
            harga = jumlah * 250000;
            break;
        }
        // Peghitungan total harga dan jumlah buku yang dibeli
        hargaTotal += harga;
        jumlahTotal += jumlah;
        // Menanyakan apakah ingin membeli buku lagi?
        cout << "Apakah ingin membeli buku yang lain? (y/t)";
        cin >> perulangan;
        // Jika ya maka program akan mengulang ke pilihan buku dan jika tidak akan lanjut ke perhitungan diskon
    } while (perulangan == 'y');

    // Penghitungan diskon
    if (hargaTotal >= 100000 && hargaTotal < 150000)
    {
        hargaTotal = hargaTotal * (1 - 0.07);
    }
    else if (hargaTotal >= 150000 && hargaTotal <= 250000)
    {
        hargaTotal = hargaTotal * (1 - 0.1);
    }
    else if (hargaTotal > 250000)
    {
        hargaTotal = hargaTotal * (1 - 0.12);
    }
    else
    {
        cout << "Maaf anda tidak mendapatkan diskon karena tidak memenuhi syarat minimal harga yang sudah ditetapkan" << endl;
    };

    // Output total harga dan jumlah buku yang dibeli
    cout << "Jumlah total buku yang anda beli adalah " << jumlahTotal << endl;
    cout << "Harga total buku yang harus dibayar adalah Rp" << hargaTotal << endl;
    // Inputkan uang pembayaran
    cout << "Masukan uang pembayaran: ";
    cin >> pembayaran;
    // Penghitungan kembalian
    kembalian = pembayaran - hargaTotal;
    // Output kembalian
    cout << "Uang kembalian anda adalah: " << kembalian << endl;

    return 0;
};