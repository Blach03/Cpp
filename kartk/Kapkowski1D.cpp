#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n,i=0;
	string s;
	fstream f1,f2;
	f1.open("sygnaly.txt", ios::in);
	f2.open("sygnaly20.txt", ios::out);
	while (!f1.eof()){
        f1>>s;
        n=s.length();
        if(n<20&&i==0) i++, f2<<s<<" ";
            else if(n<20&&i==1) i--, f2<<s<<"\n";

	}
	f1.close();
	f2.close();
	return 0;
}
