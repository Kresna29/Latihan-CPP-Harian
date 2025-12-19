/*
Nama Program : Penjumlahan Elemen Matriks
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 2 Desember 2025
Deskripsi    : Program untuk menghitung jumlah seluruh elemen pada matriks menggunakan perulangan bersarang
*/

#include <iostream>
using namespace std;

int main()
{
    int baris, kolom;
    int matriks[10][10];
    int total = 0;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Matriks[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matriks[i][j];
            total += matriks[i][j];
        }
    }

    cout << "\nJumlah seluruh elemen matriks: " << total << endl;

    return 0;
}