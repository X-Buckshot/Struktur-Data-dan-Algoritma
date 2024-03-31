#include <iostream>
#include <string>

struct Entitas {
    int nomor;
    std::string nama;
    std::string alamat;
    std::string pekerjaan;
};

void tambahRecord(Entitas *entitas[], int &jumlahEntitas) {
    if (jumlahEntitas >= 15) {
        std::cout << "Maksimal jumlah entitas telah tercapai.\n";
        return;
    }

    entitas[jumlahEntitas] = new Entitas;
    entitas[jumlahEntitas]->nomor = jumlahEntitas + 1;

    std::cout << "Masukkan nama: ";
    std::cin >> entitas[jumlahEntitas]->nama;

    std::cout << "Masukkan alamat: ";
    std::cin >> entitas[jumlahEntitas]->alamat;

    std::cout << "Masukkan pekerjaan: ";
    std::cin >> entitas[jumlahEntitas]->pekerjaan;

    ++jumlahEntitas;
}

void hapusRecord(Entitas *entitas[], int &jumlahEntitas, int nomor) {
    bool found = false;
    for (int i = 0; i < jumlahEntitas; ++i) {
        if (entitas[i]->nomor == nomor) {
            delete entitas[i];
            for (int j = i; j < jumlahEntitas - 1; ++j) {
                entitas[j] = entitas[j + 1];
            }
            found = true;
            --jumlahEntitas;
            std::cout << "Rekaman dengan nomor " << nomor << " telah dihapus.\n";
            break;
        }
    }
    if (!found) {
        std::cout << "Rekaman dengan nomor " << nomor << " tidak ditemukan.\n";
    }
}

void tampilkanRecord(Entitas *entitas[], int jumlahEntitas) {
    std::cout << "Data Entitas:\n";
    for (int i = 0; i < jumlahEntitas; ++i) {
        std::cout << "Nomor: " << entitas[i]->nomor << "\n";
        std::cout << "Nama: " << entitas[i]->nama << "\n";
        std::cout << "Alamat: " << entitas[i]->alamat << "\n";
        std::cout << "Pekerjaan: " << entitas[i]->pekerjaan << "\n\n";
    }
}

int main() {
    const int MAX_ENTITAS = 15;
    Entitas *entitas[MAX_ENTITAS];
    int jumlahEntitas = 0;

    char pilihan;
    do {
        std::cout << "Menu:\n";
        std::cout << "1. Tambah Record\n";
        std::cout << "2. Hapus Record\n";
        std::cout << "3. Tampilkan Record\n";
        std::cout << "4. Keluar\n";
        std::cout << "Pilihan: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case '1':
                tambahRecord(entitas, jumlahEntitas);
                break;
            case '2':
                int nomor;
                std::cout << "Masukkan nomor record yang ingin dihapus: ";
                std::cin >> nomor;
                hapusRecord(entitas, jumlahEntitas, nomor);
                break;
            case '3':
                tampilkanRecord(entitas, jumlahEntitas);
                break;
            case '4':
                std::cout << "Keluar dari program.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan != '4');

    // Membersihkan memori yang dialokasikan
    for (int i = 0; i < jumlahEntitas; ++i) {
        delete entitas[i];
    }

    return 0;
}
