#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {
	int a[50][30][30],i,j,k,l,n=0,nr1,nr2;

	fstream f1;
	f1.open("dzialki.txt",ios::in);
	for (i=0;i<50;i++){
		for (j=0;j<30;j++){
            for (k=0;k<30;k++){
                f1>>a[i][j][k];
                    for (l=1;l<50;l++){
                        if (a[i][j][k]==a[l][30-j][30-k]) n++;
                        else n=0;
                            if (n==900) nr1=i, nr2=l;
                    }
            }
		}
	}
	f1.close();
    cout<<"numery odwroconych dzialek to "<<i<<" i "<<l;
	system("PAUSE");
	return 0;
}
