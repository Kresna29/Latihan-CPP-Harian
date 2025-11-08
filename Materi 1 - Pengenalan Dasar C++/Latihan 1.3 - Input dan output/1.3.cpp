#include <iostream>
#include <string>   // Library untuk tipe data string
using namespace std;

int main()
{
    string nama;
    int umur;

    // Input data dari pengguna
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);             // Mengambil input string (termasuk spasi)
    cout << "Masukkan umur Anda: ";
    cin >> umur;

    // Output hasil input
    cout << "\nHalo, " << nama << "! Umur Anda " << umur << " tahun." << endl;

    return 0;
}
