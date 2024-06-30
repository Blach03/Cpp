#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int i=0,j,b[500];
	fstream f1,f2;
	f1.open("liczby.txt", ios::in);
	f2.open("wyniki_42.txt", ios::out);
	while (!f1.eof()){
        f1>>b[i];
        i++;
	}
    for(i=0;i<500;i++){
		for(j=1;j<500-i;j++) {
		if(b[j-1]>b[j])   swap(b[j-1], b[j]);
		}
    }
        for(i=0;i<500;i++){
              if(b[i]%2==0) f2<<b[i]<<"\n";
        }

	f1.close();
	f2.close();
	return 0;
}
