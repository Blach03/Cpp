#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void wczytaj_lan(string &s1,string &s2) {
	cout<<"Wpisz pierwszy lancuch znakow\n";
	cin>>s1;
	cout<<"Wpisz drugi lancuch znakow\n";
	cin>>s2;
}

void wyswietl_lan(string s1,string s2) {
	cout<<"Oto lancuchy znakow\n";
	cout<<s1<<"\n";
	cout<<s2<<"\n";
	system("PAUSE");
}


void sprawdz_anagram1(string s1,string s2) {
	int anag=1,n,m;
	if (s1.length()==s2.length())
    {
        n=s1.length();
        for(int i=0;i<n;i++)
        {
            m=s2.find(s1[i]);
            if (m!=-1)
            {
                s2.erase(m,1);
            } else
            {
                anag=0;
                break;
            }
        }
    } else anag=0;
    if (anag==1) cout<<"Te lancuchy sa anagramami"<<"\n";
    else  cout<<"Te lancuchy nie sa anagramami"<<"\n";
    system("PAUSE");
}

void sprawdz_anagram2(string s1,string s2){
    int tab[128], anag=1,n,i;
    for (i=0;i<128;i++) tab[i]=0;
    n=s1.length();
    for (i=0;i<n;i++) tab[s1[i]]++;

    n=s2.length();
    for (i=0;i<n;i++) tab[s2[i]]--;
    for (i=0;i<128;i++)
        if(tab[i]!=0)
        {
            anag=0;
            break;
        }
    if (anag==1) cout<<"Te lancuchy sa anagramami"<<"\n";
    else  cout<<"Te lancuchy nie sa anagramami"<<"\n";
    system("PAUSE");
}

int main() {
 char w;
 string z1="",z2="";
 do {
	system("CLS");
	cout<<"\n1. Wczytaj lancuchy - 1";
	cout<<"\n2. wyswietl lancuchy - 2";
	cout<<"\n3. Sprawdz anagramy1 - 3";
	cout<<"\n4. Sprawdz anagramy2 - 4";
	cout<<"\n6. Koniec - 6\n";
	cin>>w;
	switch (w) {
		case '1': wczytaj_lan(z1,z2); break;
		case '2': wyswietl_lan(z1,z2); break;
		case '3': sprawdz_anagram1(z1,z2);break;
		case '4': sprawdz_anagram2(z1,z2);break;
	}
 } while (w!='6');
 return 0;
}
