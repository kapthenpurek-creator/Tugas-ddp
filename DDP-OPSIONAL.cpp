#include <iostream>
using namespace std;

int main() {
    long hari, jam, menit, detik;
    int sisa;

    cout << "Masukkan jumlah detik: ";
    cin >> detik;
    
	// 1 hari = 86400 detik
    hari = detik / 86400;           
    sisa = detik % 86400;
     // 1 jam = 3600 detik
    jam = sisa / 3600;              
    sisa = sisa % 3600;
    // 1 menit = 60 detik
    menit = sisa / 60;              
    sisa = sisa % 60;

    cout << detik << " detik = "
         << hari << " Hari, "
         << jam << " Jam, "
         << menit << " Menit, "
         << sisa << " Detik." << endl;
    return 0;
}
