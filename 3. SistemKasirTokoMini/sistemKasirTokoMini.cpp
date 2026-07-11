#include <iostream>
#include <vector>

using namespace std;
struct Barang {
    string nama;
    int harga;
};

int pilihanBarang(int barang) {
    vector<Barang> daftarBarang;
    Barang isiBarang;
    string theBarang;
    int thePrice;

    if (barang == 1) {
        isiBarang.nama = "Gamepad";
        isiBarang.thePrice = 120;
    } else if (barang == 2) {
        isiBarang.nama = "Deskmat";
        thePrice = 70; 
    } else if (barang == 3) {
        theBarang = "Mouse";
        thePrice = 160;
    } else if (barang == 4) {
        theBarang = "Keyboard";
        thePrice = 350;
    } 
    daftarBarang.push_back(isiBarang);
}

int menuBarang() {
    vector<Barang> daftarBarang;
    int choice, button = 0;
    char question = 'y';
    
    while (question != 'n') {
        if (button == 1) {
            cout << "Wanna buy more? (y/n): ";
            cin >> question;
        }
        if (choice == 1 || choice == 2 || choice == 3 || choice == 4){
            cout << "\t[READY ITEM]"<< endl;
            cout << "1. Gamepad\t| Rp120.000" << endl;
            cout << "2. Deskmat\t| Rp70.000" << endl;
            cout << "3. Mouse\t| Rp160.000" << endl;
            cout << "4. Keyboard\t| Rp350.000" << endl; 
            cout << "Pilih barang yang ingin anda beli: ";
            cin >> choice;
            button = 1;
        }
    }
    return choice;
}


int main() {
    int choice;

    choice = menuBarang();



    return 0;
}