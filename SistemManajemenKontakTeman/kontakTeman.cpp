#include <iostream>
#include <vector>

using namespace std;
struct Kontak {
    string nama;
    int noHp;
    string email;
};

int main() {

    vector<Kontak> daftarKontak;
    string namaUser, emailUser;
    int option = 0, i, noHpUser;

    
    while (option != 4) {
        cout << "Pilih opsi:\n1. Tambah Kontak\n2. Lihat Seluruh Daftar Kontak\n3. Cari Kontak Berdasarkan Nama\n4. Keluar" << endl;
        cin >> option;
        if (option == 1) {
            cout << "Masukkan Nama: " << endl;
            cin >> namaUser;
            cout << "Masukkan Nomor HP: " << endl;
            cin >> noHpUser;
            cout << "Masukkan Email: " << endl;
            cin >> emailUser;

            daftarKontak.push_back(daftarKontak.nama, noHpUser, emailUser);
        } else if (option == 2) {
            for(i;i < daftarKontak.size();i++){
                cout << i+1 << ". " << "Nama: " << daftarKontak[i].nama << endl;
                cout << i+1 << ". " << "Nama: " << daftarKontak[i].noHp << endl;
                cout << i+1 << ". " << "Nama: " << daftarKontak[i].email << endl;
            }
        } else if (option == 3) {

        } else
            cout << "Inputan Tidak Valid!";
    }

    return 0;
}