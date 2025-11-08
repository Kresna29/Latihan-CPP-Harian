#include <iostream>
using namespace std;

int main()
{
    string nama[3];
    float nilai[3], total = 0;

    cout << "Masukkan data mahasiswa:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama: ";
        cin >> nama[i];
        cout << "Nilai: ";
        cin >> nilai[i];
        total += nilai[i];
    }

    cout << "\nDaftar Nilai Mahasiswa:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << nama[i] << " - " << nilai[i] << endl;
    }

    cout << "\nRata-rata kelas: " << total / 3 << endl;

    return 0;
}
