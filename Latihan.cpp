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

