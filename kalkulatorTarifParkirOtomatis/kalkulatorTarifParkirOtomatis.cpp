#include <iostream>

using namespace std;
int main() {
    int pilih, jam_masuk, jam_keluar, total_waktu, biaya, biaya_awal, total_biaya;

    cout << "[Kolom Pengisian Form]" << endl;
    cout << "1. Motor\n2. Mobil\nMasukkan jenis kendaraanmu: ";
    cin >> pilih;
    if (pilih != 1 && pilih != 2) {
        cout << "Input tidak valid. Inputkan angka 1 or 2" << endl;
        return 1;
    }

    cout << "[Input waktu dalam format 24 jam]" << endl;
    cout << "Masukkan jam masuk mu: ";
    cin >> jam_masuk;
    if (jam_masuk <= 0) {
        cout << "Input tidak valid. Input angka sesuai jam" << endl;
    } else if (jam_masuk > 24) {
        cout << "Input tidak valid. Input angka sesuai jam" << endl;
    }
    cout << "Masukkan jam keluar mu: ";
    cin >> jam_keluar;
    if (jam_masuk <= 0) {
        cout << "Input tidak valid. Input angka sesuai jam" << endl;
    } else if (jam_masuk > 24) {
        cout << "Input tidak valid. Input angka sesuai jam" << endl;
    }

    total_waktu = jam_keluar - jam_masuk;    
    biaya_awal = 5000;

    if (pilih == 1) {

    } else {

    }


    cout << "\n\n[Struk Pembayaran]\nTotal Waktu: " << total_waktu << "jam" << endl;
    cout << "Total pembayaran: " << total_biaya;

    return 0;
}