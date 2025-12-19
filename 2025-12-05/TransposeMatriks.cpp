/*
Nama Program : Transpose Matriks
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 5 Desember 2025
Deskripsi    : Program untuk menampilkan transpose dari sebuah matriks menggunakan array dua dimensi dan fungsi
*/

#include <iostream>
using namespace std;

// Deklarasi Fungsi
void inputMatriks(int matriks[][10], int baris, int kolom);
void tampilMatriks(int matriks[][10], int baris, int kolom);
void transposeMatriks(int matriks[][10], int hasil[][10], int baris, int kolom);

// Main Program
int main()
{
    int baris, kolom;
    int matriks[10][10];
    int hasil[10][10];

    cout << "Masukkan jumlah baris: ";
    cin >> baris;
    cout << "Masukkan jumlah kolom: ";
    cin >> kolom;

    inputMatriks(matriks, baris, kolom);

    cout << "\nMatriks Awal:\n";
    tampilMatriks(matriks, baris, kolom);

    transposeMatriks(matriks, hasil, baris, kolom);

    cout << "\nMatriks Transpose:\n";
    tampilMatriks(hasil, kolom, baris);

    return 0;
}

// Definisi Fungsi

void inputMatriks(int matriks[][10], int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Matriks[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matriks[i][j];
        }
    }
}

void tampilMatriks(int matriks[][10], int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

void transposeMatriks(int matriks[][10], int hasil[][10], int baris, int kolom)
{
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil[j][i] = matriks[i][j];
        }
    }
}
