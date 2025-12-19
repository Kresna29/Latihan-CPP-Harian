/*
Nama Program : Pokedex CLI (Tahap 1)
Nama         : Kresna Bayu Wicaksono
NPM          : 140810230025
Tanggal Buat : 01 Desember 2025
Deskripsi    : Program dasar Pokedex CLI untuk menyimpan dan menampilkan data Pokemon
               menggunakan struct dan array. Tahap 1 menambahkan:
               - Struct Pokemon dengan atribut id, nama, tipe1, tipe2, shiny, power
               - Array dataPokemon untuk menampung hingga 100 Pokemon
               - Variabel jumlah untuk menghitung Pokemon saat ini
               - Daftar tipe Pokemon (tipeList)
               - Fungsi isValidType untuk validasi tipe Pokemon
               Catatan:
               - Rencana awal: belum ada penghapusan/metode tambahan
               - Tahap berikutnya (Tahap 2) akan menambahkan fungsi tambahPokemon
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

// Deklarasi fungsi validasi tipe
bool isValidType(string tipe);

// Main Program
int main()
{
    cout << "===== POKEDEX CLI =====" << endl;
    cout << "Jumlah Pokemon saat ini: " << jumlah << endl;
    cout << "Daftar tipe Pokemon yang valid: " << endl;
    for(int i = 0; i < 18; i++)
    {
        cout << tipeList[i] << " ";
    }
    cout << endl;

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
