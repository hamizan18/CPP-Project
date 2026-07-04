#include <iostream>

using namespace std;
int main() {
    int i, pilih, jam_masuk, jam_keluar, total_waktu, biaya, biaya_awal, total_biaya;
    biaya = 3;
    biaya_awal = 5;
    total_waktu = 0;

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

    i = jam_masuk; // 23
    while (i != jam_keluar) {
        if (i == 24)
            i = 0;

        total_waktu+=1;
        i++;
    }

    if (pilih == 1) {
        total_biaya = total_waktu * biaya;
    } else {
        total_biaya = biaya_awal + (total_waktu * biaya);
    }

    cout << "\n[Struk Pembayaran]\nTotal Waktu: " << total_waktu << "jam" << endl;
    cout << "Total pembayaran: Rp" << total_biaya << ".000,00";

    return 0;
}