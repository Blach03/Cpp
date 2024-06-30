#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	int a[50][30][30],i,j,k,trawa=0,ilosc=0;

	fstream f1;
	f1.open("dzialki.txt",ios::in);
	for (i=0;i<50;i++){
		for (j=0;j<30;j++){
            for (k=0;k<30;k++){
                f1>>a[i][j][k];
                if (a[i][j][k]=="*") trawa++;
            }
		}
		if (trawa>=630) ilosc++;
		trawa=0;
	}
	f1.close();
	cout<<"ilosc dzialek z trawa (70%) to"<<ilosc;
	system("PAUSE");
	return 0;
}
