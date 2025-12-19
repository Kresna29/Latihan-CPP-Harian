#include <iostream>
using namespace std;

int main()
{
    int pilihan;

    // Perulangan minimal 1 kali (menu interaktif)
    do
    {
        cout << "\n=== Menu Sederhana ===" << endl;
        cout << "1. Halo Dunia" << endl;
        cout << "2. Tentang Program" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu (1-3): ";
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
                cout << "Halo Dunia!" << endl;
                break;
            case 2:
                cout << "Program ini contoh do...while loop." << endl;
                break;
            case 3:
                cout << "Terima kasih, program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    }
    while (pilihan != 3); // akan berhenti jika pilih 3

    return 0;
}
