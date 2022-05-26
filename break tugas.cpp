#include <iostream>
using namespace std;

struct hpMurah {
    int harga;
    string merkhp;
};
int main (){
	cout << "nyari hp harga dibawah 2 jt secepatnya!" << endl;
	cout << " ======================================" << endl;
    hpMurah hp[] = {
        {3000000, 
		 "oppo"},
        {3500000, 
		 "iphone", },
        {9000000,
		 "vivo" },
        {1900000,
		 "xiaomi"  },
        {9999999,
		 "nokia" }
    };
    int batasHarga = 2000000;
    for (int i = 0; i < 5; i++){
        if (hp[i].harga <= batasHarga ){
            break;
        }
        cout << hp[i].merkhp  << " mahal " << endl;
    }
    cout << " nahh inii " << hp[3].merkhp << " murah"  << endl;
}
