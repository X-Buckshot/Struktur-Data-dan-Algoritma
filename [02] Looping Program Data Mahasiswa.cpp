#include <iostream>
#include <string>
using namespace std;


int main() {
    string nama, nim, alamat, no_telp, jurusan;
    
    for (int i = 0; i < 5; ++i) {
        cout << "Data ke-" << i+1 << endl;
        cout << "Masukkan Nama: ";
        getline(cin, nama);
        cout << "Masukkan NIM: ";
        getline(cin, nim);
        cout << "Masukkan Alamat: ";
        getline(cin, alamat);
        cout << "Masukkan No Telp: ";
        getline(cin, no_telp);
        cout << "Masukkan Jurusan: ";
        getline(cin, jurusan);
        
        cout << "===================================" << endl;
        cout << "Nama: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Alamat: " << alamat << endl;
        cout << "No Telp: " << no_telp << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "===================================" << endl;
    }
    
    return 0;
}
