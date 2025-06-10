#include <iostream>
using namespace std;
int main()
{
    try
    {
        cout << "Selamat Belajar di Prodi TI UMY" << endl;
        throw 5; // mellemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a)
    {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...)
    {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "Default Pengecualian dieksekusi" << endl;
    }
    return 0;
}