/*
Nama Program : Jumlah dan Rata-Rata Bilangan
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 19 November 2025
Deskripsi    : Program untuk menghitung jumlah dan rata-rata dari N bilangan
               yang dimasukkan pengguna menggunakan perulangan for
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int angka;
    int total = 0;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Masukkan bilangan ke-" << i << " : ";
        cin >> angka;
        total += angka;
    }

    cout << "Jumlah      : " << total << endl;
    cout << "Rata-rata   : " << (double) total / n << endl;

    return 0;
}
