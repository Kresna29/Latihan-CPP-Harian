#include <iostream>
using namespace std;

// Fungsi yang mengembalikan hasil penjumlahan dua bilangan
int tambah(int a, int b)
{
    return a + b; // mengembalikan nilai ke pemanggil
}

int main()
{
    int x, y;

    cout << "Masukkan angka pertama: ";
    cin >> x;
    cout << "Masukkan angka kedua: ";
    cin >> y;

    // Memanggil fungsi dan menyimpan hasilnya
    int hasil = tambah(x, y);

    cout << "Hasil penjumlahan = " << hasil << endl;

    return 0;
}
