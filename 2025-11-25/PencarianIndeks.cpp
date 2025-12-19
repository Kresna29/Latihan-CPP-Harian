/*
Nama Program : Pencarian Indeks Nilai
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 25 November 2025
Deskripsi    : Program untuk mencari dan menampilkan semua indeks
               yang memiliki nilai tertentu dalam array
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

    cout << "Nilai ditemukan pada data ke: ";

    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == cari)
        {
            cout << i + 1 << " ";
            ditemukan = true;
        }
    }

    if (!ditemukan)
    {
        cout << "Tidak ada";
    }

    cout << endl;
    return 0;
}
