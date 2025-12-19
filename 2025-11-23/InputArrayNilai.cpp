/*
Nama Program : Input Array Nilai Mahasiswa
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 23 November 2025
Deskripsi    : Program untuk menyimpan dan menampilkan nilai mahasiswa
               menggunakan array satu dimensi dan perulangan
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int nilai[100];

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    cout << "\nDaftar Nilai Mahasiswa:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Mahasiswa ke-" << i + 1 << " : " << nilai[i] << endl;
    }

    return 0;
}