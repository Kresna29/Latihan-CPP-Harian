/*
Nama Program : Pencarian Nilai
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 25 November 2025
Deskripsi    : Program untuk mencari suatu nilai tertentu di dalam
               array menggunakan metode pencarian linear (sequential search)
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int nilai[100];
    int cari;
    bool ditemukan = false;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai data ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> cari;

    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == cari)
        {
            cout << "Nilai ditemukan pada data ke-" << i + 1 << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan)
    {
        cout << "Nilai tidak ditemukan." << endl;
    }

    return 0;
}
