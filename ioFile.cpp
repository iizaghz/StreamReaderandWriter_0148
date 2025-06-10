#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string baris;
    // membuka file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");
    cout << ">= menulis file, \'q\' untuk keluar" << endl;
    // unlimited loop untuk menulis
    while (true)
    {
        cout << "-  ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukan karakter q
        if (baris == "q")
            break;
        // menulis da memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();
    // menulis file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open("contohfile.txt");
    cout << endl
         << ">= Membuka dan mebaca file " << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan melampilkan ini
    else
        cout << "Unable to open file";
    return 0;
}