#include<iostream>
#include<conio.h>
using namespace std;

#define ATAS 119
#define BAWAH 115
#define KIRI 97
#define KANAN 100
int main() {
	int petax = 20; 
	int petay = 25; 
	int posx = 19;
	int posy = 16;
	int x,y;
	
	
	cout << "***************************************\n"
		 << "[]           SELAMAT DATANG          []\n"
		 << "[]             CARI DOSEN            []\n"
		 << "=======================================\n"
		 << "\n <ATURAN MAIN>\n "
		 <<"cari pak Insan buat lengkapin tugas kamu!!\n"
		 <<"'8' = mahasiswa\n"<<" H  = jalan\n"<<"--- = parkiran\n"<<"] [ = bangunan/gedung\n"<<"^^^ = taman\n"<<" S  = orang\n"
		 <<"\n tekan w, a, s, d  untuk menggerakan\n";
		 
		int peta[petax][petay]= {
		{1,1,1,1,0,0,0,0,0,0,0,1,1,1,5,5,5,5,5,5,1,1,1,1,0},
		{1,1,1,1,0,2,0,0,0,0,0,1,1,1,3,5,5,5,5,5,1,1,1,1,0},
		{1,1,1,1,0,5,5,5,5,5,4,1,1,1,0,0,0,4,0,0,1,1,1,1,0},
		{0,0,0,0,0,5,5,5,5,5,0,1,1,1,0,0,0,4,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0},
		{0,0,0,4,4,4,4,4,4,0,0,0,0,0,0,0,3,4,0,0,0,0,0,0,0},
		{6,0,0,4,5,5,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0},
		{0,0,0,4,5,5,5,5,4,1,1,1,1,1,5,5,5,4,5,1,1,1,1,4,0},
		{3,0,0,0,0,0,0,0,4,1,1,1,1,1,5,5,5,4,3,1,1,1,1,4,0},
		{1,1,1,1,0,0,0,0,4,1,1,1,1,1,0,0,0,4,0,1,1,1,1,4,0},
		{1,1,1,1,0,0,0,0,4,5,5,5,3,0,0,0,0,4,0,0,0,0,0,4,0},
		{1,1,1,1,0,0,0,0,4,5,5,5,5,0,0,0,0,4,0,0,0,0,0,4,0},
		{5,5,5,0,0,0,0,0,4,0,0,0,0,0,0,0,0,4,0,5,5,1,1,1,1},
		{0,5,5,4,4,4,4,4,4,0,0,0,0,0,0,0,0,4,0,5,5,1,1,1,1},
		{0,5,5,0,0,0,0,0,4,0,0,0,0,0,0,0,3,4,0,5,5,1,1,1,1},
		{0,5,5,0,0,0,0,3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0},
		{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,4,4,0,0,0,0,0,0},
		{1,1,1,1,5,5,5,5,5,1,1,1,1,1,0,0,0,4,4,0,0,0,0,0,0},
		{1,1,1,1,5,5,5,5,5,1,1,1,1,1,0,0,0,4,4,0,0,1,1,1,1},
		{1,1,1,1,0,0,0,0,0,1,1,1,1,1,0,0,0,4,4,0,0,1,1,1,1},
		};
	while(1){
		int arah;
		arah = (getch());
		if (arah == KIRI ){
  			if (peta[posy-1][posx] == 4 || peta[posy-1][posx] == 0 || peta[posy-1][posx] == 5 ){
            posy = posy - 1;}
            else if (peta[posy-1][posx] == 3 || peta[posy-1][posx] == 2 ){
            	peta[x][y]= 0;
			}
    	}
        else if (arah == KANAN){
        	if (peta[posy+1][posx] == 4 || peta[posy+1][posx] == 0 || peta[posy+1][posx] == 5 ){
            posy = posy + 1;}
            else if (peta[posy+1][posx] == 3 || peta[posy+1][posx] == 2 ){
            	peta[x][y]= 0;
			}
    	}
        else if (arah == BAWAH){
        	if  (peta[posy][posx+1] == 4 || peta[posy][posx+1] == 0 || peta[posy][posx+1] == 5 ){
            posx = posx + 1;}
            else if (peta[posy][posx+1] == 3 || peta[posy][posx+1] == 2 ){
            	peta[x][y]= 0;
			}
        }
        else if (arah == ATAS){
        	if (peta[posy][posx-1] == 4 || peta[posy][posx-1] == 0 || peta[posy][posx-1] == 5 ){
            posx = posx - 1;}
            else if (peta[posy][posx-1] == 3 || peta[posy][posx-1] == 2 ){
            	peta[x][y]= 0;
			}
        }
        system("cls");
		cout<<"\nposisi x = "<<posx<<endl<<"posisi y = "<<posy<<endl<<endl;
        for (x=0;x<petax;x++){
   			for (y=0;y<petay;y++){
    			if (peta[x][y]==1){
				 cout<<"] [";
			   	 }
			   	else if(posx == x && posy == y) {
			    cout << "'8'";
			 	 }
				else if (peta[x][y]==3){ 
				cout<<" S "; 
				 }
				 else if (peta[x][y]==2){ 
				cout<<" S "; 
				 }
				 else if (peta[x][y]==4){ 
				cout<<" H "; 
				 }
				 else if (peta[x][y]==5){ 
				cout<<"---"; 
				 }
				 else if (peta[x][y]==0){
				 cout<<"^^^";
				 }
			   } cout<<endl;
			  }
			  
		int jawab;
		if(peta[posx][posy] == 3){
		system("cls");
	    cout<< "kita : liat pak insan ga ? \n";
	    cout << "Orang : galiat eung\n"
	    	 << "\nlanjutkan pencarian tekan w/a/s/d";
	    	}
	    if(peta[posx][posy] == 2){
		system("cls");
	    cout << "orang : eh mau kmna!\n";
	    cin >> jawab;
	    cout << "Orang : pak insan ada didalem, masuk saja\n\n\n";
	    cout << "****************************************\n"
	    	 << "[]        dosenmu sudah ketemu        []\n"
	    	 << "[]    silahkan selesaikan urusanmu    []\n"
	    	 << "========================================\n"
			 << " tamat"; 
	       }
	    }return 0;
   }

