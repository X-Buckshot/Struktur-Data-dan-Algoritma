#include <iostream>
#include <string>
using namespace std;


struct Mahasiswa {
    string nama;
    int umur;
    string jurusan;
};

int main() {
    
    const int jumlah_mahasiswa = 10;
    Mahasiswa daftar_mahasiswa[jumlah_mahasiswa];

    
    daftar_mahasiswa[0] = {"Andi", 20, "Informatika"};
    daftar_mahasiswa[1] = {"Budi", 21, "Teknik Elektro"};
    daftar_mahasiswa[2] = {"Cindy", 22, "Sistem Informasi"};
	daftar_mahasiswa[3] = {"Yujara", 22, "Sistem Informasi"};
	daftar_mahasiswa[4] = {"Ryco", 25, "Teknik Informasi"};
	daftar_mahasiswa[5] = {"Giovani", 19, "Sistem Informasi"};
	daftar_mahasiswa[6] = {"Rymond", 20, "Teknik Informasi"};
	daftar_mahasiswa[7] = {"Rino", 18, "Sistem Informasi"};
	daftar_mahasiswa[8] = {"Dandi", 21, "Teknik Informasi"};
	daftar_mahasiswa[9] = {"Jovalta", 18, "Teknik Informasi"};
    
    Mahasiswa mhs;

    
    mhs.nama = "Mutiara";
    mhs.umur = 22;
    mhs.jurusan = "Teknik Informatika";

    
    cout << "Daftar Mahasiswa:\n";
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "Nama: " << daftar_mahasiswa[i].nama << ", Umur: " << daftar_mahasiswa[i].umur << ", Jurusan: " << daftar_mahasiswa[i].jurusan << endl;
    }

    
    cout << "Data Mahasiswa:\n";
    cout << "Nama: " << mhs.nama << ", Umur: " << mhs.umur << ", Jurusan: " << mhs.jurusan << endl;

    return 0;
}
