#include <iostream>
#include <vector>
using namespace std;

vector<int> faktor(int n) {
    vector<int> faktor_n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            faktor_n.push_back(i);
        }
    }
    return faktor_n;
}

bool bilanganPrima(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void tampilkanBilangan(int batas) {
    vector<int> ganjil, genap, prima;

    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            genap.push_back(i);
        } else {
            ganjil.push_back(i);
        }
        if (bilanganPrima(i)) {
            prima.push_back(i);
        }
    }

    cout << "Bilangan ganjil dari 1 hingga " << batas << ": ";
    for (int g : ganjil) cout << g << " ";
    cout << "\nJumlah bilangan ganjil: " << ganjil.size() << endl;
    for (int g : ganjil) {
        vector<int> faktors = faktor(g);
        cout << "Faktor dari " << g << ": ";
        for (int f : faktors) cout << f << " ";
        cout << endl;
    }

    cout << "\nBilangan genap dari 1 hingga " << batas << ": ";
    for (int g : genap) cout << g << " ";
    cout << "\nJumlah bilangan genap: " << genap.size() << endl;
    for (int g : genap) {
        vector<int> faktors = faktor(g);
        cout << "Faktor dari " << g << ": ";
        for (int f : faktors) cout << f << " ";
        cout << endl;
    }

    cout << "\nBilangan prima dari 1 hingga " << batas << ": ";
    for (int p : prima) cout << p << " ";
    cout << "\nJumlah bilangan prima: " << prima.size() << endl;
    for (int p : prima) {
        vector<int> faktors = faktor(p);
        cout << "Faktor dari " << p << ": ";
        for (int f : faktors) cout << f << " ";
        cout << endl;
    }
}

int main() {
    int batas;
    cout << "Masukkan batas bilangan: ";
    cin >> batas;

    tampilkanBilangan(batas);

    return 0;
}
