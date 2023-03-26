#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;
    
    if (nilai > 80) {
        cout << "Nilai A" << endl;
    } else if (nilai > 70) {
        cout << "Nilai B" << endl;
    } else {
        cout << "Nilai C" << endl;
    }
    
    return 0;
}
