#include <iostream>
#include <vector>
#include <string>

using namespace std;
struct Kontak {
    string nama;
    int noHp;
    string email;
};

int main() {

    vector<Kontak> daftarKontak;
    Kontak user;
    string namaUser, emailUser;
    int option = 0, i, noHpUser;

    
    while (option != 4) {
        cout << "Pilih opsi:\n1. Tambah Kontak\n2. Lihat Seluruh Daftar Kontak\n3. Cari Kontak Berdasarkan Nama\n4. Keluar" << endl;
        cin >> option;
        if (option == 1) {
            cout << "Masukkan Nama: " << endl;
            getline(cin, user.nama);
            cout << "Masukkan Nomor HP: " << endl;
            cin >> user.noHp;
            cout << "Masukkan Email: " << endl;
            cin >> user.email;

            daftarKontak.push_back(user);
        } else if (option == 2) {
            for(i = 0;i < daftarKontak.size();i++){
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