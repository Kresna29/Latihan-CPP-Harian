/*
Nama Program : Ganjil atau Genap
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 17 November 2025
Deskripsi    : Program untuk menentukan apakah sebuah bilangan termasuk ganjil atau genap
*/

#include <iostream>
using namespace std;

int main()
{
    int angka;

    cout << "Masukkan sebuah bilangan: ";
    cin >> angka;

    if (angka % 2 == 0)
    {
        cout << "Bilangan " << angka << " adalah GENAP" << endl;
    }
    else
    {
        cout << "Bilangan " << angka << " adalah GANJIL" << endl;
    }

    return 0;
}
