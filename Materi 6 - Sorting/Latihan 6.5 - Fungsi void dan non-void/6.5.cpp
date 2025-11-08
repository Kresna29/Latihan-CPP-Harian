#include <iostream>
using namespace std;

// Fungsi void (langsung menampilkan hasil)
void bubbleSortAscending(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Fungsi non-void (mengembalikan nilai maksimum)
int cariMaksimum(int arr[], int n)
{
    int maks = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maks)
            maks = arr[i];
    }
    return maks;
}

int main()
{
    int n, data[100];
    cout << "Masukkan jumlah data: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    bubbleSortAscending(data, n);

    cout << "\nData setelah diurutkan (Ascending): ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";

    cout << "\nNilai maksimum adalah: " << cariMaksimum(data, n) << endl;

    return 0;
}
