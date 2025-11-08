#include <iostream>
using namespace std;

int main()
{
    int angka, total = 0;

    cout << "Masukkan angka (0 untuk berhenti):" << endl;

    // Perulangan while berjalan sampai user memasukkan 0
    while (true)
    {
        cin >> angka;
        if (angka == 0)
        {
            break; // keluar dari loop jika angka = 0
        }
        total += angka;
    }

    cout << "Total jumlah = " << total << endl;

    return 0;
}
