#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n,i=0;
	fstream f1,f2;
	f1.open("liczby.txt", ios::in);
	f2.open("wyniki_41.txt", ios::out);
	while (!f1.eof()){
        f1>>n;
        if(n%2!=0&&i==0) i++, f2<<n<<" ";
            else if(n%2!=0&&i==1) i--, f2<<n<<"\n";

	}
	f1.close();
	f2.close();
	return 0;
}
