#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdio.h>

using namespace std;

void wczytaj_lan(string &s) {
	cout<<"\n Wpisz lancuch znakow:";
	char c;
	do{
        c=getchar();
	}while (c!='\n');
	getline(cin,s);
}

void wyswietl_lan(string s) {
	cout<<"\n Oto lancuch znakow:"<<s;
	system("PAUSE");
}
void zamien_na_d(string &s) {
    int n,i;
    n=s.length();
    for(i=0; i<n; i++)
        if (s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;

 }

void zamien_na_m(string &s) {
    int n,i;
    n=s.length();
    for(i=0; i<n; i++)
        if (s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
 }

void odwroc_lit(string &s) {
    int n,i;
    n=s.length();
    for (i=0;i<n;i++)
        if (s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
    else if (s[i]>='A'&&s[i]<='Z')
            s[i]=s[i]+32;
 }

int main() {
 char w;
 string z="";
 do {
	system("CLS");
	cout<<"\n1. Wczytaj lancuch - 1";
	cout<<"\n2. wyswietl lancuch - 2";
	cout<<"\n3. Zamien na duze litery - 3";
	cout<<"\n4. Zamien na male litery - 4";
	cout<<"\n5. Odwroc wielkosc liter - 5";
	cout<<"\n6. licz slowa - 6";
	cout<<"\n7. czestosc duzych liter - 7";
	cout<<"\n8. Koniec - 6\n";
	cin>>w;
	switch (w) {
		case '1': wczytaj_lan(z); break;
		case '2': wyswietl_lan(z); break;
		case '3': zamien_na_d(z); break;
		case '4': zamien_na_m(z); break;
		case '5': odwroc_lit(z); break;
		case '6': (z); break;
	}
 } while (w!='8');
 return 0;
}

