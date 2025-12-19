/*
Nama Program : Input dan Tampil Matriks
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 2 Desember 2025
Deskripsi    : Program untuk menginput dan menampilkan matriks menggunakan array dua dimensi
*/

#include <iostream>
using namespace std;

int main()
{
    int baris, kolom;
    int matriks[10][10];

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
        }
    }

    cout << "\nIsi Matriks:\n";
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}