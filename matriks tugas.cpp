//1 = jalan
//2 = semak 
//3 = pohon
//4 = batu 
//5 = danau
//6 = rumah
//7 = rumput
//dapat dilewati 1,2,6,7.

#include <iostream>
using namespace std;

#define KEY_UP 7
#define KEY_DOWN 8
#define KEY_LEFT 9
#define KEY_RIGHT 10

int main() {
    int panjangPeta = 20; // x
    int lebarPeta = 20; // y
    
    int posisiKarakterY = 20;
    int posisiKarakterX = 1;
    
    cout << "Karakter ada di y:" << posisiKarakterY << ", x:" << posisiKarakterX << "\n";
    
    int peta[lebarPeta][panjangPeta] = {
        {3,3,3,3,3,2,2,7,7,7,7,7,1,1,1,1,1,6,6,6},
        {3,3,3,3,3,3,7,7,7,7,7,7,1,7,7,7,7,7,7,7},
        {3,3,3,3,3,3,7,7,2,2,7,7,1,7,7,4,4,4,4,4},
        {3,3,3,3,3,3,7,7,2,2,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,2,2,7,7,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,2,7,7,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,7,7,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,7,7,2,2,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,7,7,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,7,7,2,2,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,2,2,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,7,7,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,7,7,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,3,3,7,7,2,2,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,2,2,7,7,7,7,7,7,1,7,7,4,5,5,5,5},
        {3,3,3,3,2,2,7,7,7,2,2,7,1,7,7,4,5,5,5,5},
        {3,3,3,2,2,2,7,7,7,2,2,7,1,7,7,4,5,5,5,5},
        {3,3,1,1,1,1,1,1,1,1,1,1,1,7,7,4,4,4,4,4},
        {3,3,1,3,3,3,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
        {1,1,1,3,3,3,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
    };
    
    
    int arrowKey = 0;
    
    while(1) {
        // Input Keyboard
        cout << "Masukan arrow key ";
        cin >> arrowKey;
        cout << "Arrow key yang dimasukan " << arrowKey << "\n";
        
        // Aturan menggerakkan karakter ke atas
        if(arrowKey == 7 && (peta[posisiKarakterY-1][posisiKarakterX] == 1 || peta[posisiKarakterY-1][posisiKarakterX] == 4) && posisiKarakterY >= 0) {
            // Gerakkan karakter ke atas
            posisiKarakterY = posisiKarakterY-1;
        }
        
        // Aturan menggerakkan karakter ke bawah
        if(arrowKey == 8 && (peta[posisiKarakterY+1][posisiKarakterX] == 1 || peta[posisiKarakterY+1][posisiKarakterX] == 4) && posisiKarakterY < lebarPeta) {
            // Gerakkan karakter ke atas
            posisiKarakterY = posisiKarakterY+1;
        }
        
        // Aturan menggerakkan karakter ke kiri
        if(arrowKey == 9 && (peta[posisiKarakterY][posisiKarakterX-1] == 1 || peta[posisiKarakterY][posisiKarakterX-1] == 4) && posisiKarakterX >= 0) {
            // Gerakkan karakter ke atas
            posisiKarakterX = posisiKarakterX-1;
        }
        
        // Aturan menggerakkan karakter ke kanan
        if(arrowKey == 10 && (peta[posisiKarakterY][posisiKarakterX+1] == 1 || peta[posisiKarakterY][posisiKarakterX+1] == 4) && posisiKarakterX < panjangPeta) {
            // Gerakkan karakter ke atas
            posisiKarakterX = posisiKarakterX+1;
        }
        
        // Render grafik
        for(int y=0; y<lebarPeta; y++) {
            for(int x=0; x<panjangPeta; x++) {
                
                if(posisiKarakterX == x && posisiKarakterY == y) {
                    cout << 0 << " ";
                } else {
                    cout << peta[y][x] << " ";
                }
            }
            cout << "\n";
        }
    }
     
    
    return 0;
}
