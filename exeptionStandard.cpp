#include <iostream>
#include <exception>
// untuk boyek exception yang akan digunaan
#include <array>
// untuk obyek array yang akan digunakan
using namespace std;

int main()
{
    cout << "Awal Program" << endl; // penanda :1....
    try
    {
        array<int, 3> data = {10, 20, 30};
        // pesan array integer 3 elemen
        cout << data.at(5) << endl;
        // memanggil array elemen ke 5
    }
    catch (exception &e)
    {
        // penangkap mengguanan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang terakhir" << endl;
    /*penanda 2: bahwa program berjalan tanpaberhenti meskipun terjadi kesalahan*/
    return 0;
}