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

    cout << "[1] Mulai menebak angka: ";
    cin >> n;
    counter +=1;
    if (n > random_numb) {
        cout << "Terlalu besar!" << endl;
    } else if (n == random_numb) {
        "Benar!";
        return 0;
    } else 
        cout << "Terlalu kecil!" << endl;

    while (n != random_numb) {
        cout << "[" << counter+1 <<"] Tebak Angka: ";
        cin >> n;
        counter+=1;

        if (n > random_numb)
        {
            cout << "Terlalu besar!" << endl;
        } else
            cout << "Terlalu kecil!" << endl;
    }

    cout << "BENARRR!!\n[Jumlah tebakanmu: " << counter << "]" << endl;
    
    return 0;
}