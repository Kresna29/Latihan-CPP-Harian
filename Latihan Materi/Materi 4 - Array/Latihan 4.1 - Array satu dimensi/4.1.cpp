#include <iostream>
using namespace std;

int main()
{
    int nilai[5]; // deklarasi array berisi 5 elemen

    cout << "Masukkan 5 nilai:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "\nDaftar nilai:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai[" << i << "] = " << nilai[i] << endl;
    }

    return 0;
}
