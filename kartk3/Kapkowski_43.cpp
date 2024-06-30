#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int i=0,j,k,l,n,a[500],b[500],n[5];
	fstream f1,f2;
	f1.open("liczby.txt", ios::in);
	f2.open("wyniki_42.txt", ios::out);
	while (!f1.eof()){
        f1>>b[i];
        i++;
	}
        for(i=0;i<500;i++){
            b[i]%10=n[1];
            b[i]=(b[i]-n[1])/10;
            b[i]%10=n[2];
            b[i]=(b[i]-n[2])/10;
            b[i]%10=n[3];
            b[i]=(b[i]-n[3])/10;
            b[i]%10=n[4];
            b[i]=(b[i]-n[4])/10;
            b[i]%10=n[5];
            for(k=0;k<5;k++){
		for(j=1;j<5-k;j++) {
		if(n[j-1]<n[j])   swap(n[j-1], n[j]);
		}
		}
		for(l=0;l<500;l++) n=n[1]+10*n[2]+100*n[3]+1000*n[4]+10000*n[5];
        }
        }

	f1.close();
	f2.close();
	return 0;
}
