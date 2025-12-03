#include <iostream>
using namespace std;

float tambah(float x, float y) {
    return x + y;
}

float kurang(float x, float y) {
    return x - y;
}

float kali(float x, float y) {
    return x * y;
}

float bagi(float x, float y) {
    return x / y;
}

int main() {
    float a, b;
    char op;

    cout << "Masukkan angka pertama : ";
    cin >> a;

    cout << "Masukkan operator (+ - * /) : ";
    cin >> op;

    cout << "Masukkan angka kedua : ";
    cin >> b;

    if (op == '+') {
        cout << "Hasil = " << tambah(a, b);
    } else if (op == '-') {
        cout << "Hasil = " << kurang(a, b);
    } else if (op == '*') {
        cout << "Hasil = " << kali(a, b);
    } else if (op == '/') {
        cout << "Hasil = " << bagi(a, b);
    } else {
        cout << "Operator tidak dikenal";
    }

    return 0;
}

