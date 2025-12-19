/*
Nama Program : Sorting Nilai Menggunakan Bucket Sort
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 6 Desember 2025
Deskripsi    : Program untuk mengurutkan data nilai menggunakan metode Bucket Sort
*/

#include <iostream>
using namespace std;

// Deklarasi Fungsi
void bucketSort(int data[], int n);
void tampilData(int data[], int n);

// Main Program
int main()
{
    int n;
    int data[100];

    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> data[i];
    }

    bucketSort(data, n);

    cout << "\nData setelah diurutkan (Ascending):\n";
    tampilData(data, n);

    return 0;
}

// Definisi Fungsi

void bucketSort(int data[], int n)
{
    int bucket[101] = {0}; // Asumsi nilai 0 - 100

    for (int i = 0; i < n; i++)
    {
        bucket[data[i]]++;
    }

    int index = 0;
    for (int i = 0; i <= 100; i++)
    {
        while (bucket[i] > 0)
        {
            data[index] = i;
            index++;
            bucket[i]--;
        }
    }
}

void tampilData(int data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
