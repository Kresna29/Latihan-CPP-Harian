/*
Nama Program : Sorting Nilai Menggunakan Quick Sort
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 6 Desember 2025
Deskripsi    : Program untuk mengurutkan data nilai menggunakan metode Quick Sort (Divide and Conquer)
*/

#include <iostream>
using namespace std;

// Deklarasi Fungsi
void quickSort(int data[], int low, int high);
int partition(int data[], int low, int high);
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

    quickSort(data, 0, n - 1);

    cout << "\nData setelah diurutkan (Ascending):\n";
    tampilData(data, n);

    return 0;
}

// Definisi Fungsi

void quickSort(int data[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(data, low, high);

        quickSort(data, low, pi - 1);
        quickSort(data, pi + 1, high);
    }
}

int partition(int data[], int low, int high)
{
    int pivot = data[high];
    int i = low - 1;
    int temp;

    for (int j = low; j < high; j++)
    {
        if (data[j] <= pivot)
        {
            i++;
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    temp = data[i + 1];
    data[i + 1] = data[high];
    data[high] = temp;

    return i + 1;
}

void tampilData(int data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
