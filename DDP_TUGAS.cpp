#include <iostream>
using namespace std;

int main() {
    long totaldetik;
    int sisadetik, hari, jam, menit, detikakhir;

    cout << "Masukan bilangan >1(satuan detik) : ";
    cin >> totaldetik;

    hari = totaldetik / 86400;
    sisadetik = totaldetik % 86400;

    jam = sisadetik / 3600;
    sisadetik %= 3600;

    menit = sisadetik / 60;
    detikakhir = sisadetik % 60;

    cout << "\nHasil konversi:\n";
    cout << totaldetik << " detik = " << hari << " hari, "
         << jam << " jam, " << menit << " menit, "
         << detikakhir << " detik." << endl;

    return 0;
}
