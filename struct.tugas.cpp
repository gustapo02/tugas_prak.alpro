#include <iostream>
using namespace std;

struct makanan {
	string nama;
	string tempatBeli;
	int skorRasa;
	int kadarMicin;
};

struct manusia {
	int umur;
	string nama;
	int tinggiBadan;
	int beratBadan;
	int jenisKelamin;
	string emosiSaatIni;
	string hobi[10];
	int tingkatKecerdasan;
	
	printKecerdasan() {
		cout << "tingkat kecerdasan " << nama << " saat ini adalah " << tingkatKecerdasan << "\n"; 
	}
	
	makan(makanan objekMakanan) {
		tingkatKecerdasan = tingkatKecerdasan - objekMakanan.kadarMicin;
		cout << nama << " makan sama " << objekMakanan.nama << " yang dibeli di " << objekMakanan.tempatBeli << "\n";
		printKecerdasan();
	}
};


int main() {
	
	makanan makanan1;
	makanan1.nama = "Mie mercon";
	makanan1.tempatBeli = "Warungnya cici";
	makanan1.skorRasa = 9;
	makanan1.kadarMicin = 2;
	
	makanan makanan2;
	makanan2.nama = "Seblak";
	makanan2.tempatBeli = "Warungnya husen";
	makanan2.skorRasa = 10;
	makanan2.kadarMicin = 7;
	
	manusia m1;
	m1.umur = 20;
	m1.nama = "sakir";
	m1.tinggiBadan = 165;
	m1.beratBadan = 45;
	m1.jenisKelamin = 1;
	m1.hobi[0] = "main kelereng";
	m1.hobi[1] = "baca keadaan";
	m1.hobi[2] = "karate";
	m1.tingkatKecerdasan = 100;
	
	m1.makan(makanan1);
	m1.makan(makanan1);
	m1.makan(makanan2);
	m1.makan(makanan2);
	m1.makan(makanan2);
	
	cout << endl;
	
	cout << m1.nama << " umurnya " << m1.umur << "\n";
	
	for(int i=0; i < 10; i++) {
		if(m1.hobi[i] != "") {
			cout << "hobi ke " << i+1 << " nya " << m1.hobi[i] << "\n";	
		}	
	}
	return 0;
}
