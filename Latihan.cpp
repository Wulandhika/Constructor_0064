#include <iostream>
#include <string>
using namespace std;

class Barang
{
private:
    string namaBarang;
    string kodeBarang;

public:
    Barang(string nama, string kode)
    {
        namaBarang = nama;
        kodeBarang = kode;
    }

    void tampilkanData()
    {
        cout << "Data Barang:" << endl;
        cout << "Nama Barang: " << namaBarang << endl;
        cout << "Kode Barang: " << kodeBarang << endl;
    }
};

int main()
{
    Barang barang1("Tas Apip", "12345");
    Barang barang2("Tas Saya", "10000");
    barang1.tampilkanData();
    barang2.tampilkanData();

    return 0;
}
