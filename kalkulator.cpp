#include <iostream>

int main()
{
    float x, y, hasil;
    char aritmatika;
    std::cout << "Selamat datang di program kalkulator sederhana.\n";
    // Masukan angka pertama
    std::cout << "Masukan angka pertama: ";
    std::cin >> x;

    // Pilih operator (+, -, *, /)
    do
    {
        std::cout << "Masukan operator (+, -, *, dan /): ";
        std::cin >> aritmatika;
    } while (aritmatika != '+' && aritmatika != '-' && aritmatika != '*' && aritmatika != '/');

    // Masukan angka ke 2
    std::cout << "Masukan angka ke 2: ";
    std::cin >> y;

    // Tampilkan hasil
    switch (aritmatika)
    {
    case '+':
        hasil = x + y;
        break;
    case '-':
        hasil = x - y;
        break;
    case '*':
        hasil = x * y;
        break;
    case '/':
        hasil = x / y;
        break;
    }
    std::cout << "Hasil dari " << x << aritmatika << y << " adalah " << hasil;
    return 0;
}
