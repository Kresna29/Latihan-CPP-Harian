/*
Nama Program : Mencari Nilai Terbesar pada Matriks
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 5 Desember 2025
Deskripsi    : Program untuk mencari nilai terbesar pada matriks menggunakan fungsi
*/

#include <iostream>
using namespace std;

// Deklarasi Fungsi
int nilaiTerbesar(int matriks[][10], int baris, int kolom);

// Main Program
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

    cout << "\nNilai terbesar pada matriks: "
         << nilaiTerbesar(matriks, baris, kolom) << endl;

    return 0;
}

// Definisi Fungsi

int nilaiTerbesar(int matriks[][10], int baris, int kolom)
{
    int max = matriks[0][0];

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            if (matriks[i][j] > max)
            {
                max = matriks[i][j];
            }
        }
    }

    return max;
}
