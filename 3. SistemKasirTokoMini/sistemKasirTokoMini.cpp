#include <iostream>
#include <vector>

using namespace std;
int menuBarang() {
    int choice, button = 0;
    char question = 'y';

    
    while (question != 'n') {
        if (button == 1) {
            cout << "Wanna buy more? (y/n): ";
            cin >> question;
        }
        cout << "\t[READY ITEM]"<< endl;
        cout << "1. Gamepad\t| Rp120.000" << endl;
        cout << "2. Deskmat\t| Rp70.000" << endl;
        cout << "3. Mouse\t| Rp160.000" << endl;
        cout << "4. Keyboard\t| Rp350.000" << endl; 
        cout << "Pilih barang yang ingin anda beli: ";
        cin >> choice;
        button = 1;
    }
    return choice;
}

int main() {
    int choice;

    choice = menuBarang();



    return 0;
}