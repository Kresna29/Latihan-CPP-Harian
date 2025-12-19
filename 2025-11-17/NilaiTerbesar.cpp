/*
Nama Program : Nilai Terbesar dari Tiga Bilangan
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 17 November 2025
Deskripsi    : Program untuk menentukan nilai terbesar dari tiga buah bilangan menggunakan percabangan
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    int terbesar;

    cout << "Masukkan bilangan pertama : ";
    cin >> a;
    cout << "Masukkan bilangan kedua   : ";
    cin >> b;
    cout << "Masukkan bilangan ketiga  : ";
    cin >> c;

    if (a >= b && a >= c)
    {
        terbesar = a;
    }
    else if (b >= a && b >= c)
    {
        terbesar = b;
    }
    else
    {
        terbesar = c;
    }

    cout << "Nilai terbesar adalah: " << terbesar << endl;

    return 0;
}
