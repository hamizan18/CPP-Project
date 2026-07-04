#include <iostream>

using namespace std;
int main() {
    int pilih, jam_masuk, jam_keluar, total_waktu, biaya, total_biaya;

    cout << "[Kolom Pengisian Form]" << endl;
    cout << "1. Motor\n2. Mobil\nMasukkan jenis kendaraanmu: ";
    cin >> pilih;
    if (pilih <= 0) {
        cout << "Input tidak valid. Inputkan angka 1 or 2" << endl;
    } else if (pilih > 2) {
        cout << "Input tidak valid. Inputkan angka 1 or 2" << endl;
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

    cout << "\n\n[Struk Pembayaran]\nTotal Waktu: " << total_waktu << "jam" << endl;
    cout << "Total pembayaran: " << total_biaya;

    return 0;
}