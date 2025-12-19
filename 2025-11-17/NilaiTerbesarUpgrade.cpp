/*
Nama Program : Analisis Data Nilai
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 17 November 2025
Deskripsi    : Program untuk menganalisis sekumpulan data nilai meliputi
               rata-rata, nilai maksimum, nilai minimum, serta
               data dengan nilai tertinggi dan terendah
*/

#include <iostream>
using namespace std;

// Deklarasi Fungsi
void inputNilai(int nilai[], int n);
void tampilNilai(int nilai[], int n);
double hitungRataRata(int nilai[], int n);
int nilaiMaks(int nilai[], int n);
int nilaiMin(int nilai[], int n);
void dataEkstrem(int nilai[], int n);

// Main Program
int main()
{
    int n;
    int nilai[100];

    cout << "Masukkan jumlah data nilai: ";
    cin >> n;

    inputNilai(nilai, n);
    tampilNilai(nilai, n);

    cout << "\nNilai rata-rata : " << hitungRataRata(nilai, n) << endl;
    cout << "Nilai maksimum  : " << nilaiMaks(nilai, n) << endl;
    cout << "Nilai minimum   : " << nilaiMin(nilai, n) << endl;

    dataEkstrem(nilai, n);

    return 0;
}

// Definisi Fungsi

// Input data nilai
void inputNilai(int nilai[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Masukkan nilai data ke-" << i + 1 << " : ";
        cin >> nilai[i];
    }
}

// Menampilkan data nilai
void tampilNilai(int nilai[], int n)
{
    cout << "\nDaftar Data Nilai:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << " : " << nilai[i] << endl;
    }
}

// Menghitung nilai rata-rata
double hitungRataRata(int nilai[], int n)
{
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += nilai[i];
    }

    return (double) total / n;
}

// Mencari nilai maksimum
int nilaiMaks(int nilai[], int n)
{
    int max = nilai[0];

    for (int i = 1; i < n; i++)
    {
        if (nilai[i] > max)
        {
            max = nilai[i];
        }
    }

    return max;
}

// Mencari nilai minimum
int nilaiMin(int nilai[], int n)
{
    int min = nilai[0];

    for (int i = 1; i < n; i++)
    {
        if (nilai[i] < min)
        {
            min = nilai[i];
        }
    }

    return min;
}

// Menampilkan data dengan nilai tertinggi dan terendah
void dataEkstrem(int nilai[], int n)
{
    int max = nilaiMaks(nilai, n);
    int min = nilaiMin(nilai, n);

    cout << "\nData dengan nilai tertinggi:\n";
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == max)
        {
            cout << "Data ke-" << i + 1
                 << " dengan nilai " << max << endl;
        }
    }

    cout << "\nData dengan nilai terendah:\n";
    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == min)
        {
            cout << "Data ke-" << i + 1
                 << " dengan nilai " << min << endl;
        }
    }
}
