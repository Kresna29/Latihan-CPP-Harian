/*
Nama Program : Rata-Rata Nilai Mahasiswa
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 23 November 2025
Deskripsi    : Program untuk menghitung rata-rata nilai mahasiswa menggunakan array dan perulangan (Loop)
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int nilai[100];
    int total = 0;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai mahasiswa ke-" << i + 1 << " : ";
        cin >> nilai[i];
        total += nilai[i];
    }

    cout << "Rata-rata nilai: " << (double) total / n << endl;

    return 0;
}
