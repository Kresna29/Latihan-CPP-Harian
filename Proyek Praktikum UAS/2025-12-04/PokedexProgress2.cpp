/*
Nama Program : Pokedex CLI (Tahap 2)
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 04 Desember 2025
Deskripsi    : Tahap 2 menambahkan fungsi untuk menambah data Pokemon ke array.
               Perubahan dari Tahap 1:
               - Ditambahkan fungsi tambahPokemon() untuk input ID, nama, tipe,
                 dual type, shiny, dan power
               - Validasi ID (0-9999) dan tipe Pokemon menggunakan isValidType()
               Catatan:
               - Rencana awal: input dual type mungkin pakai metode berbeda, tapi
                 diimplementasikan dengan input y/n untuk lebih mudah
               - Fitur lain (tampil, cari, sort, filter, simpan/load, menu) belum ada
*/

#include <iostream>
#include <string>
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

int main()
{
    cout << "===== POKEDEX CLI =====" << endl;
    cout << "Jumlah Pokemon saat ini: " << jumlah << endl;

    // Contoh pemanggilan fungsi tambahPokemon
    char lagi;
    do
    {
        tambahPokemon();
        cout << "Tambah Pokemon lagi? (y/n): ";
        cin >> lagi;
        cin.ignore();
    } while(lagi == 'y' || lagi == 'Y');

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
