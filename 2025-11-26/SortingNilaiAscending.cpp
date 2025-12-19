/*
Nama Program : Sorting Nilai Ascending
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 26 November 2025
Deskripsi    : Program untuk mengurutkan data nilai secara menaik
               menggunakan metode Bubble Sort
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int nilai[100];
    int temp;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai data ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }

    // Proses sorting (Bubble Sort)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nilai[j] > nilai[j + 1])
            {
                temp = nilai[j];
                nilai[j] = nilai[j + 1];
                nilai[j + 1] = temp;
            }
        }
    }

    cout << "\nData setelah diurutkan (Ascending):\n";
    for (int i = 0; i < n; i++)
    {
        cout << nilai[i] << " ";
    }

    cout << endl;
    return 0;
}
