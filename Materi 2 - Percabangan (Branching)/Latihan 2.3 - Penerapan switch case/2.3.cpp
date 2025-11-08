#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    cout << "=== Menu Makanan ===" << endl;
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Mie Goreng" << endl;
    cout << "3. Soto Ayam" << endl;
    cout << "4. Bakso" << endl;
    cout << "Pilih menu (1-4): ";
    cin >> pilihan;

    // Menampilkan hasil berdasarkan pilihan
    switch (pilihan)
    {
        case 1:
            cout << "Anda memilih Nasi Goreng." << endl;
            break;
        case 2:
            cout << "Anda memilih Mie Goreng." << endl;
            break;
        case 3:
            cout << "Anda memilih Soto Ayam." << endl;
            break;
        case 4:
            cout << "Anda memilih Bakso." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
