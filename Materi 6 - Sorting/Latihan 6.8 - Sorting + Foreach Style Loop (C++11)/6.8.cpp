#include <iostream>
#include <vector>
using namespace std;

// Sorting menggunakan fungsi dan passing by reference
void bubbleSort(vector<int> &data, bool ascending = true)
{
    int n = data.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            bool kondisi = ascending ? (data[j] > data[j + 1]) : (data[j] < data[j + 1]);
            if (kondisi)
            {
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
}

// Menampilkan data dengan for-each
void tampilkan(const vector<int> &data)
{
    for (int nilai : data)
    {
        cout << nilai << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    vector<int> data(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nData asli: ";
    tampilkan(data);

    bubbleSort(data, true);
    cout << "Ascending: ";
    tampilkan(data);

    bubbleSort(data, false);
    cout << "Descending: ";
    tampilkan(data);

    return 0;
}
