/*
Nama Program : Pokedex CLI (Tahap 3)
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 05 Desember 2025
Deskripsi    : Tahap 3 menambahkan fungsi untuk menampilkan semua Pokemon dan mengurutkan Pokemon berdasarkan Power.
               Perubahan dari Tahap 2:
               - Ditambahkan fungsi tampilkanPokemon() untuk menampilkan semua data Pokemon
               - Ditambahkan fungsi sortByPower() menggunakan Selection Sort
               Catatan:
               - Rencana awal: ingin menggunakan Bubble Sort untuk pengurutan
               - Perubahan: diganti Selection Sort karena lebih mudah dipahami dan lebih efisien untuk dataset kecil
               - Fungsi tambahPokemon() tetap ada
               - Fitur lain (cari, filter, simpan/load, menu) belum ada
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Struct
struct Pokemon
{
    int id;
    string nama;
    string tipe1;
    string tipe2;
    bool shiny;
    int power;
};

// Array untuk menyimpan data Pokemon
const int MAX = 100;
Pokemon dataPokemon[MAX];
int jumlah = 0;

// List tipe Pokemon
string tipeList[18] = 
{
    "Normal","Fire","Water","Grass","Electric","Ice","Fighting",
    "Poison","Ground","Flying","Psychic","Bug","Rock","Ghost",
    "Dragon","Dark","Steel","Fairy"
};

// Deklarasi fungsi
bool isValidType(string tipe);
void tambahPokemon();
void tampilkanPokemon();
void sortByPower();

int main()
{
    cout << "===== POKEDEX CLI =====" << endl;
    cout << "Jumlah Pokemon saat ini: " << jumlah << endl;

    // Tambah beberapa Pokemon
    char lagi;
    do
    {
        tambahPokemon();
        cout << "Tambah Pokemon lagi? (y/n): ";
        cin >> lagi;
        cin.ignore();
    } while(lagi == 'y' || lagi == 'Y');

    // Tampilkan semua Pokemon
    tampilkanPokemon();

    // Urutkan berdasarkan Power
    sortByPower();

    // Tampilkan ulang setelah diurutkan
    cout << "\nData Pokemon setelah diurutkan berdasarkan Power:\n";
    tampilkanPokemon();

    return 0;
}

// Fungsi validasi tipe
bool isValidType(string tipe)
{
    for(int i = 0; i < 18; i++)
    {
        if(tipe == tipeList[i])
            return true;
    }
    return false;
}

// Fungsi tambah Pokemon
void tambahPokemon()
{
    if(jumlah >= MAX)
    {
        cout << "Data penuh!" << endl;
        return;
    }

    Pokemon p;
    char pilihan;

    cout << "ID Pokemon (0-9999): ";
    cin >> p.id;
    if(p.id < 0 || p.id > 9999)
    {
        cout << "ID tidak valid!" << endl;
        return;
    }

    cin.ignore();
    cout << "Nama Pokemon: ";
    getline(cin, p.nama);

    do
    {
        cout << "Tipe Utama: ";
        getline(cin, p.tipe1);
    } while(!isValidType(p.tipe1));

    cout << "Apakah dual type? (y/n): ";
    cin >> pilihan;
    cin.ignore();

    if(pilihan == 'y' || pilihan == 'Y')
    {
        do
        {
            cout << "Tipe Kedua: ";
            getline(cin, p.tipe2);
        } while(!isValidType(p.tipe2));
    }
    else
    {
        p.tipe2 = "-";
    }

    cout << "Apakah shiny? (y/n): ";
    cin >> pilihan;
    p.shiny = (pilihan == 'y' || pilihan == 'Y');

    cout << "Power: ";
    cin >> p.power;

    dataPokemon[jumlah] = p;
    jumlah++;

    cout << "Pokemon berhasil ditambahkan!" << endl;
}

// Fungsi tampilkan semua Pokemon
void tampilkanPokemon()
{
    if(jumlah == 0)
    {
        cout << "Belum ada data Pokemon!" << endl;
        return;
    }

    for(int i = 0; i < jumlah; i++)
    {
        cout << "ID    : " << setw(4) << setfill('0') << dataPokemon[i].id << endl;
        cout << "Nama  : " << dataPokemon[i].nama << endl;
        cout << "Tipe  : " << dataPokemon[i].tipe1;
        if(dataPokemon[i].tipe2 != "-")
        {
            cout << " / " << dataPokemon[i].tipe2;
        }
        cout << endl;
        cout << "Status: " << (dataPokemon[i].shiny ? "Shiny" : "Normal") << endl;
        cout << "Power : " << dataPokemon[i].power << endl;
        cout << "----------------------" << endl;
    }
}

// Fungsi urutkan Pokemon berdasarkan Power (Selection Sort)
void sortByPower()
{
    if(jumlah == 0)
    {
        cout << "Belum ada data Pokemon!" << endl;
        return;
    }

    for(int i = 0; i < jumlah - 1; i++)
    {
        int minIdx = i;
        for(int j = i + 1; j < jumlah; j++)
        {
            if(dataPokemon[j].power < dataPokemon[minIdx].power)
            {
                minIdx = j;
            }
        }
        // Tukar posisi
        Pokemon temp = dataPokemon[i];
        dataPokemon[i] = dataPokemon[minIdx];
        dataPokemon[minIdx] = temp;
    }

    cout << "Data berhasil diurutkan berdasarkan Power!" << endl;
}
