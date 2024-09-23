#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cout << "Input tinggi segitiga: ";
    cin >> tinggi;
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
