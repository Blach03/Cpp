#include <iostream>
#include <fstream>

using namespace std;



int main() {
	int n,i,j,x=0;
	string tab[5000];
	fstream f1,f2;
	f1.open("dane.txt", ios::in);
	f2.open("zad_5.txt", ios::out);
	while (!f1.eof()) {
           for (i=0;i<5000;i++)
            {
                f1>>tab[i];
                n=tab[i].length();
                for (j=0;j<=n/2;j++)
                {
                    if (j!=n-j) break;
                    x++;
                }
            }

	}
    cout<<x<<"\n";
    f2<<x;
    system("PAUSE");

	f1.close();
	f2.close();
	return 0;
}
