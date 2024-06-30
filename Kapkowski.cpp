#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;


void generuj_liczby(int b[], int k){
    srand(time(NULL));
    for(int i=0;i<k;i++) b[i]=rand()%530-220;
    return;
}

void wyswietl_liczby(int b[],int k) {
  system("CLS");
  cout<<"Oto tablica a:\n";
  int i;
  for (i=0;i<k;i++) {
	cout<<b[i]<<" ";
  }
  return;
}

void max_i_min(int b[],int k) {
    int mx=b[0],c=0;
    for(int i=0;i<k;i++){
        if(b[i]>mx)mx=b[i],c=i;
    }
    cout<<"\n najwieksza liczba to tab["<<c<<"]="<<mx<<"\n";
    int mi=b[0];
    for(int i=0;i<k;i++){
        if(b[i]<mi)mi=b[i],c=i;
    }
    cout<<"\n najmniejesza liczba to tab["<<c<<"]="<<mi<<"\n";
    system("PAUSE");
    return;
}

void przesun_liczby(int b[],int k){

        int c;
        int x;
        int mi=b[0];
        for(int j=0;j<k;j++){
        if(b[j]<mi)mi=b[j],x=j;
    }
        c=k-x-1;

        int d[c];
        for(int i=0;i<c;i++) d[i]=b[k-c+i];
        for(int i=k-1;i>=c;i--)b[i]=b[i-c];
        for(int i=0;i<c;i++) b[i]=d[i];
    return;
}

void najdluzszy_rosnacy(int b[], int k) {
    int c=0, d, e=0,f;
    for(int i=0;i<k;i++){
        if(b[i]<b[i+1]) c++, f=i;
            else if(b[i]>b[i+1])d=c, c=0;
             if(e<d)  e=d;
    }
    cout<<"Najdluzszy ciag roznacy ma "<<e<<" znakow i zaczyna sie od elementu z indeksem "<<f<<"\n";
}

int main()
{
	char w;
	int a[5000];
	int n;
	cout<<"\nWybierz ilosc liczb: ";
    cin>>n;
	do
	{
		system("CLS");
		cout<<"Wybierz co chcesz zrobic:";
		cout<<"\n1. Generuj liczby - 1";
		cout<<"\n2. Wyswietl liczby - 2";
		cout<<"\n3. Znajdz maksimum i minimum - 3";
		cout<<"\n4. Przesun liczby - 4";
		cout<<"\n5. Parzyste na poczatek - 5";
		cout<<"\n6. Najdluzszy ciag rosnacy - 6";
		cout<<"\n7. Koniec - 7\n";
		cin>>w;
		switch (w)
		{
			case '1' : generuj_liczby(a,n);break;
			case '2' : wyswietl_liczby(a,n);break;
			case '3' : max_i_min(a,n);break;
            case '4' : przesun_liczby(a,n);break;
//			case '5' : parzyste_na_poczatek(a,n);break;
			case '6' : najdluzszy_rosnacy(a,n);break;
		}
		cout<<"\n";
		system("PAUSE");
	} while (w!='7');
	return 0;
}
