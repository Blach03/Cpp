#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void wczytaj_lan(string &s) {
	cout<<"Wpisz lancuch znakow\n";
	cin>>s;
	return;
}

void wyswietl_lan(string s) {
	cout<<"Oto lancuch znakow\n";
	cout<<s<<"\n";
	system("PAUSE");
	return;
}

void sprawdz_palindrom(string s) {
    bool pal=true;
    for(int i=0, j=s.length()-1; i<j; i++, j--)
        if(s[i]!=s[j])
    {
        pal=false;
            break;
    }
    if (pal)

        cout<<s<<" jest palindromem ";
    else
        cout<<s<<" nie jest palindromem ";
    system("PAUSE");
    return;
}

int main() {
 char w;
 string z;
 do {
	system("CLS");
	cout<<"\n1. Wczytaj lancuch - 1";
	cout<<"\n2. wyswietl lancuch - 2";
	cout<<"\n3. Sprawdz palindrom - 3";
	cout<<"\n4. Koniec - 4\n";
	cin>>w;
	switch (w) {
		case '1': wczytaj_lan(z); break;
		case '2': wyswietl_lan(z); break;
		case '3': sprawdz_palindrom(z);break;
	}
 } while (w!='4');
 return 0;
}
