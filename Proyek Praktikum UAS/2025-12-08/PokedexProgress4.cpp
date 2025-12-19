/*
Nama Program : Pokedex CLI (Tahap 4)
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 08 Desember 2025
Deskripsi    : Tahap 4 menambahkan fungsi untuk mencari Pokemon dan filter berdasarkan tipe.
               Perubahan dari Tahap 3:
               - Ditambahkan fungsi cariPokemon() untuk pencarian nama (case-insensitive)
               - Ditambahkan fungsi filterByType() untuk menampilkan Pokemon berdasarkan tipe tunggal atau dual
               Catatan:
               - Rencana awal: filter dual type direncanakan pakai metode string matching kompleks
               - Perubahan: diganti menggunakan split sederhana dengan koma agar lebih mudah dipahami
               - Fungsi tambahPokemon(), tampilkanPokemon(), sortByPower() tetap digunakan
               - Fitur simpan/load dan menu CLI belum ada
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
string toLowerCase(string teks);
void tambahPokemon();
void tampilkanPokemon();
void sortByPower();
void cariPokemon();
void filterByType();

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
    cout << "\nData Pokemon setelah diurutkan berdasarkan Power:\n";
    tampilkanPokemon();

    // Cari Pokemon
    cariPokemon();

    // Filter Pokemon berdasarkan tipe
    filterByType();

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

// Fungsi konversi string ke lowercase
string toLowerCase(string teks)
{
    for(int i = 0; i < teks.length(); i++)
    {
        if(teks[i] >= 'A' && teks[i] <= 'Z')
            teks[i] = teks[i] + 32;
    }
    return teks;
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
        Pokemon temp = dataPokemon[i];
        dataPokemon[i] = dataPokemon[minIdx];
        dataPokemon[minIdx] = temp;
    }

    cout << "Data berhasil diurutkan berdasarkan Power!" << endl;
}

// Fungsi cari Pokemon (case-insensitive)
void cariPokemon()
{
    if(jumlah == 0)
    {
        cout << "Belum ada data Pokemon!" << endl;
        return;
    }

    string namaCari;
    cin.ignore();
    cout << "Masukkan nama Pokemon untuk dicari: ";
    getline(cin, namaCari);

    string key = toLowerCase(namaCari);
    bool ditemukan = false;

    for(int i = 0; i < jumlah; i++)
    {
        if(toLowerCase(dataPokemon[i].nama) == key)
        {
            cout << "----------------------" << endl;
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
            ditemukan = true;
        }
    }

    if(!ditemukan)
    {
        cout << "Pokemon tidak ditemukan!" << endl;
    }
}

// Fungsi filter Pokemon berdasarkan tipe
void filterByType()
{
    if(jumlah == 0)
    {
        cout << "Belum ada data Pokemon!" << endl;
        return;
    }

    string input, tipe1, tipe2;
    bool dual = false;

    cin.ignore();
    cout << "Masukkan tipe (contoh: Fire atau Grass,Poison): ";
    getline(cin, input);

    int pos = input.find(',');
    if(pos != string::npos)
    {
        dual = true;
        tipe1 = input.substr(0, pos);
        tipe2 = input.substr(pos + 1);
    }
    else
    {
        tipe1 = input;
    }

    bool ada = false;
    for(int i = 0; i < jumlah; i++)
    {
        if(!dual)
        {
            if(dataPokemon[i].tipe1 == tipe1 || dataPokemon[i].tipe2 == tipe1)
            {
                cout << dataPokemon[i].nama << " (" << dataPokemon[i].power << ")" << endl;
                ada = true;
            }
        }
        else
        {
            if((dataPokemon[i].tipe1 == tipe1 && dataPokemon[i].tipe2 == tipe2) ||
               (dataPokemon[i].tipe1 == tipe2 && dataPokemon[i].tipe2 == tipe1))
            {
                cout << dataPokemon[i].nama << " (" << dataPokemon[i].power << ")" << endl;
                ada = true;
            }
        }
    }

    if(!ada)
    {
        cout << "Tidak ada Pokemon dengan tipe tersebut!" << endl;
    }
}
