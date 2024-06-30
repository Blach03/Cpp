#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n,i=0,tab[100],naj=0,naj2=0;
	string s;
	fstream f1;
	f1.open("sygnaly.txt", ios::in);
	while (!f1.eof()){
        f1>>s;
        n=s.length();
        for (i=0;i<=n;i++){
            if(tab[i]==tab[i+1]) naj++;
            else naj2=naj, naj=0;
        cout<<naj;
        }

	}
	f1.close();
	return 0;
}
