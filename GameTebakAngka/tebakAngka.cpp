#include <iostream>
#include <random>

using namespace std;
int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(1, 100);
    int n = 0;
    int counter = 0;

    int random_numb = distr(gen);

    cout << "[Pilih angka dari 1 - 100]" << endl;
    
    do {
        cout << "Sebutkan angka yang ingin kamu tebak pertama: ";
        cin >> n;
        if (random_numb < n) {
            cout << "terlalu kecil!" << endl 
                << endl;
                counter+=1;
        }
        else {
            cin >> n;
            cout << "terlalu besar!" << endl
                << endl;
        counter+=1;
        }
        while (n != random_numb) {
            if (random_numb < n) {
                cout << "Input angka: ";
                cin >> n;
                counter+=1;
                cout << "terlalu kecil!" << endl
                << endl;
            }
            else {
                cout << "Input angka: ";
                cin >> n;
                counter+=1;
                cout << "terlalu besar!" << endl
                << endl;
            }
        }
    }
    cout << "Jumlah tebakanmu: " << counter << endl;
    
    return 0;
}