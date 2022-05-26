#include <iostream>
using namespace std;

struct futsal_s {
    int umur;
    string nama;
};
int main (){
	cout << " seleksi timnas futsal senior" << endl;
	cout << " ==============================="<< endl;
    futsal_s futsal[] = {
        {25, 
		 "sumon"},
        {22, 
		 "kuda", },
        {18,
		 "bima" },
        {24,
		 "kibo"  },
        {23,
		 "piin" }
    };
	int batasUmur = 20;
    for (int i = 0; i < 5; i++){
        if (futsal[i].umur < batasUmur ){
            continue;
        }
        cout << futsal[i].nama  << " lolos ke tahap selanjutnya " << endl;
    }
    cout << "bila nama anda tidak tercantum berarti anda gagal"<< endl;
}
