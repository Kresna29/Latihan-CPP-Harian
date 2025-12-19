/*
Nama Program : Akses Array dengan Pointer
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 27 November 2025
Deskripsi    : Program untuk mengakses dan menampilkan elemen array menggunakan pointer
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int data[100];
    int *ptr;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan data ke-" << i + 1 << " : ";
        cin >> data[i];
    }

    ptr = data; // pointer menunjuk ke elemen pertama array

    cout << "\nData menggunakan pointer:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : " << *(ptr + i) << endl;
    }

    return 0;
}
