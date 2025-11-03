#include <iostream>
using namespace std;

int main(){
	int detik;
	
	cout<<"masukan angka >1 (dalam satuan detik) =";
	cin>>detik;
	
	long long jam = detik / 3600;
	long long sisa_detik = detik % 3600;
	int menit = sisa_detik / 60;
	int detik_akhir = sisa_detik & 60;
	
	cout<<endl;
	cout<<"hasil konversi   :"<<endl;
	cout<<detik<<" "<<"detik ="<<" "<<jam<<"jam, "<<menit<<"menit, "<<" "<<detik_akhir<<"detik";
	
	return 0;
}
