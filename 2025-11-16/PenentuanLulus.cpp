/*
Nama Program : Penentuan Status Kelulusan
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 16 November 2025
Deskripsi    : Program untuk menentukan status kelulusan mahasiswa
               berdasarkan nilai yang dimasukkan menggunakan percabangan
*/

#include <iostream>
using namespace std;

int main()
{
    int nilai;

    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    if (nilai >= 60)
    {
        cout << "Status: LULUS" << endl;
    }
    else
    {
        cout << "Status: TIDAK LULUS" << endl;
    }

    return 0;
}