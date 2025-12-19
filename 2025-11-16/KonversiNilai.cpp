/*
Nama Program : Konversi Nilai ke Grade
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 16 November 2025
Deskripsi    : Program untuk mengonversi nilai mahasiswa dalam bentuk angka
               menjadi nilai huruf (A, B, C, D, E) menggunakan percabangan
*/

#include <iostream>
using namespace std;

int main()
{
    int nilai;
    char grade;

    cout << "Masukkan nilai mahasiswa: ";
    cin >> nilai;

    if (nilai >= 80)
    {
        grade = 'A';
    }
    else if (nilai >= 70)
    {
        grade = 'B';
    }
    else if (nilai >= 60)
    {
        grade = 'C';
    }
    else if (nilai >= 50)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }

    cout << "Nilai huruf: " << grade << endl;

    return 0;
}