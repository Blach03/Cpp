#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

void wczytaj_zd(string &s) {
	cout<<"Wpisz zdanie\n";
	char c;
	do  {
			c=getchar();
		} while (c!='\n');
	getline(cin,s);
	return;
}

void wyswietl_zd(string s) {
	cout<<"Oto zdanie\n";
	cout<<s;
	system("PAUSE");
	return;
}

void usun_p(string &s) {
	while (s[0]==' ') s.erase(0,1);
}

void usun_k(string &s) {
	int n;
	n=s.length();
	while (s[n-1]==' '&&n>0) {
			s.erase(n-1,1);
			n--;
	}
}

void usun_wsp(string &s) {
	usun_p(s);
	usun_k(s);
	int i,n;
	n=s.length();
    for (i=0; i<n-1; i++) {
        while (s[i]==' ' &&s[i+1]==' ' ) {
			s.erase(i,1);
			n=s.length();
		}
    }
}

void ilosc_wyr(string s) {
	usun_wsp(s);
	int il_wyr=0,n,i;
	n=s.length();
	for (i=0;i<n;i++)
		if (s[i]==' ')  il_wyr++;
	il_wyr++;
	cout<<"Ilosc wyrazow w zdaniu: "<<il_wyr<<"\n";
	system("PAUSE");
}

bool czy_litera (int c) {
    if ((c>=65 && c<=90) || (c>=97 && c<=120)) {
        return true;
    } else {
        return false;
    }
}

void najdluzzszy_wyr (string &s){
    int n=s.length();
    int najd=0;
    int pocz=-1;
    for(int i=0; i<n; i++){
        if(pocz==-1 && czy_litera(s[i])){
            pocz=i;
        }
        if (pocz >=0 && czy-litera(s[i])) && (i==n-1 || !czy_litera(s[i+1])){
            int dlugosc=i-pocz+1;
            if (dlugosc>najd){
                najd=dlugosc;
            pocz=-1;
        }
    }
    cout<<"Najd³u¿szy wyraz = "<<najd<<endl<<endl;

}

void (string &s){


}


int main()
{
    char w;
	string s;
    do
    {
      system("CLS");
      cout<<"1. Wczytaj zdanie - 1";
      cout<<"\n2. Wyswietl zdanie - 2";
      cout<<"\n3. Usun spacje na poczatku - 3";
      cout<<"\n4. Usun spacje na koncu - 4";
      cout<<"\n5. Usun wszystkie zbedne spacje - 5";
      cout<<"\n6. Wyswietl ilosc wyrazow w zdaniu - 6";
      cout<<"\n7.  - 7";
      cout<<"\n8. Zlicz znaki - 8";
      cout<<"\n9. -9"
      cout<<"\n10. Koniec - 10\n";
      cin>>w;
      cout<<"\n";
      switch (w)
      {
        case '1': wczytaj_zd(s); break;
        case '2': wyswietl_zd(s); break;
        case '3': usun_p(s); break;
        case '4': usun_k(s); break;
        case '5': usun_wsp(s); break;
        case '6': ilosc_wyr(s); break;
     /*   case '7': (s); break;
        case '8': zlicz_znaki(s); break;
         case '9': (s); break;*/
      }

    } while (w!='10');
    return 0;
}
