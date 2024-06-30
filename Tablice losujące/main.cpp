#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

void generuj_liczby(int b[],int n)
{
    int i;
    srand(time(NULL));
    for(i=0;i<n;i++) b[i]=rand()%501-200;

}

void wyswietl_liczby(int b[], int n)
{
        int i;
        cout<<"\n";
        for(i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<"\n";
        system("PAUSE");
}

void znajdz_max(int b[], int n)
{
    int i, t_max;
    t_max=b[0];
    for(i=0;i<n;i++) if (b[i]>t_max) t_max=b[i];
        cout<<"Najwieksza liczba to:"<<t_max;

}

void przesun_1p (int b[],int n)
{
    int i,pom;
    pom=b[n-1];
    for(i=n-2;i>=0;i--) b[i+1]=b[i];
    b[0]=pom;
}

void przesun_1l (int b[],int n)
{
    int i,pom;
    pom=b[0];
    for(i=1;i<=n-1;i++) b[i-5]=b[i];
    b[n-1]=pom;
}
void przesun_5p (int b[],int n)
{
    int p[5];
    for (int i=0; i<5; i++) p[i]=b[n-5+i];
    for (int i=n-1; i>=5; i--) b[i]=b[i-5];
    for (int i=0; i<5; i++) b[i]=p[i];
}

void przesun_5l (int b[],int n)
{
    int p[5];
    for (int i=0; i<5; i++) p[i]=b[i];
    for (int i=0; i<n-5; i++) b[i]=b[i+5];
    for (int i=0; i<5; i++) b[n-5+i]=p[i];
}

void przesun_n (int b[],int n)
{
    int x;
    cout<<"Wybierz co chcesz zrobic:";
    cout<<"\n1. Przesun w prawo - 1";
    cout<<"\n2. Przesun w lewo - 2\n";
    cin>>x;

if (x==1)
    {
        int a;
        cout<<"Podaj odleglosc przesuniecia\n";
        cin>>a;
        int p[a];
        for (int i=0; i<a; i++) p[i]=b[n-a+i];
        for (int i=n-1; i>=a; i--) b[i]=b[i-a];
        for (int i=0; i<a; i++) b[i]=p[i];
    }
else if (x==2)
    {
        int a;
        cout<<"Podaj odleglosc przesuniecia\n";
        cin>>a;
        int p[5];
        for (int i=0; i<a; i++) p[i]=b[i];
        for (int i=0; i<n-a; i++) b[i]=b[i+a];
        for (int i=0; i<a; i++) b[n-a+i]=p[i];
    }
else cout<<"Zla wartosc\n";
}

int main()
{
	char w;
	int a[20000],n;
	cout<<"\nWybierz ilosc liczb (n<20001): ";
    cin>>n;
    //cout<<"RNDMAX="<<RAND_MAX<<"\n";
	do
	{
		cout<<"Wybierz co chcesz zrobic:";
		cout<<"\n1. Generowanie liczb - 1";
		cout<<"\n2. Wyswietlenie liczb z tablicy - 2";
		cout<<"\n3. Przesun o 1 w prawo - 3";
		cout<<"\n4. Przesun o 1 w lewo - 4";
		cout<<"\n5. Znajdz maksimum - 5";
		cout<<"\n6. Przesun o 5 w prawo - 6";
		cout<<"\n7. Przesun o 5 w lewo - 7";
		cout<<"\n8. Przesun o dowolna wartosc - 8";
		cout<<"\nK. Koniec - K\n";
		cin>>w;
		switch (w)
		{
			case '1' : generuj_liczby(a,n);break;
			case '2' : wyswietl_liczby(a,n);break;
            case '3' : przesun_1p(a,n);break;
			case '4' : przesun_1l(a,n);break;
			case '5' : znajdz_max(a,n);break;
			case '6' : przesun_5p(a,n);break;
			case '7' : przesun_5l(a,n);break;
			case '8' : przesun_n(a,n);break;
		}
		cout<<"\n";
		system("PAUSE");
	} while (w!='K'&&w!='k');
	return 0;
}
