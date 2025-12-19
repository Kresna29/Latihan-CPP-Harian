/*
Nama Program : Review Sorting dan Searching Data
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 17 Desember 2025
Deskripsi    : Program review yang menggabungkan sorting (Quick Sort) dan searching (Binary Search) menggunakan array dan fungsi
*/

#include <iostream>
using namespace std;

// Deklarasi Fungsi
void inputData(int data[], int n);
void tampilData(int data[], int n);
void quickSort(int data[], int low, int high);
int partition(int data[], int low, int high);
int binarySearch(int data[], int n, int key);

// Main Program
int main()
{
    int n, cari;
    int data[100];

    cout << "Masukkan jumlah data: ";
    cin >> n;

    inputData(data, n);

    quickSort(data, 0, n - 1);

    cout << "\nData setelah diurutkan:\n";
    tampilData(data, n);

    cout << "\nMasukkan data yang ingin dicari: ";
    cin >> cari;

    int hasil = binarySearch(data, n, cari);

    if (hasil != -1)
    {
        cout << "Data ditemukan pada indeks ke-" << hasil << endl;
    }
    else
    {
        cout << "Data tidak ditemukan" << endl;
    }

    return 0;
}

// Definisi Fungsi

void inputData(int data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : ";
        cin >> data[i];
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

int binarySearch(int data[], int n, int key)
{
    int kiri = 0;
    int kanan = n - 1;

    while (kiri <= kanan)
    {
        int tengah = (kiri + kanan) / 2;

        if (data[tengah] == key)
        {
            return tengah;
        }
        else if (data[tengah] < key)
        {
            kiri = tengah + 1;
        }
        else
        {
            kanan = tengah - 1;
        }
    }

    return -1;
}
