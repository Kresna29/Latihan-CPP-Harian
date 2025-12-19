/*
Nama Program : Deret Bilangan 1 sampai N
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 19 November 2025
Deskripsi    : Program untuk menampilkan deret bilangan dari 1 sampai N menggunakan perulangan for
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Masukkan nilai N: ";
    cin >> n;

    cout << "Deret bilangan: ";
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
