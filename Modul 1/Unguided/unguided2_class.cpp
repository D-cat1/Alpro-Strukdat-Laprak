#include <iostream>

using namespace std;

class Book
{
private:
    bool sudah_dibaca = false;
public:
    int tahun_terbit;
    string penerbit;
    string judul;
    Book(string nama, string pener, int tahun){
        tahun_terbit = tahun;
        penerbit = pener;
        judul = nama;
    };
    string cek_dibaca() {
        if (sudah_dibaca) {
            return "sudah dibaca";
        } else {
            return "belum dibaca";
        }
    }
    void tandai_dibaca() {
        sudah_dibaca = true;
    }
};


int main() {
    Book buku1("halo dika", "UD. Sinar Jendela", 2024);
    cout << "Nama Buku : " << buku1.judul << endl;
    cout << "Penerbit : " << buku1.penerbit << endl;
    cout << "Tahun : " << buku1.tahun_terbit << endl;
    cout << "Status : " << buku1.cek_dibaca() << endl;
    buku1.tandai_dibaca();
    cout << "Status : " << buku1.cek_dibaca() << endl;
    return 0;
}
