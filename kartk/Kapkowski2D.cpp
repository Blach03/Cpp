#include <iostream>
#include <fstream>

using namespace std;

int main() {
	int n,i=0;
	string s;
	fstream f1;
	f1.open("sygnaly.txt", ios::in);
	while (!f1.eof()){
        f1>>s;
        i++;
    if (i==39) {
        s=s.substr(10,10);
        cout<<s;
        i=0;
            }
        }
	}
	f1.close()
	return 0;
}
