/*
Nama Program : Tukar Nilai Menggunakan Pointer
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 27 November 2025
Deskripsi    : Program untuk menukar dua buah nilai menggunakan pointer
*/

#include <iostream>
using namespace std;

// Deklarasi fungsi
void tukar(int *a, int *b);

int main()
{
    int x, y;

    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;

    tukar(&x, &y);

    cout << "\nSetelah ditukar:\n";
    cout << "Nilai x = " << x << endl;
    cout << "Nilai y = " << y << endl;

    return 0;
}

// Definisi fungsi
void tukar(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
