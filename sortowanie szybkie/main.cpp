#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void generuj_liczby(int b[],int k)
{
	int i;
	system("CLS");
	srand(time(NULL));
	for (i=0;i<k;i++)
	{
		b[i]=rand()%601-300;
	}
	return;
}

void wyswietl_liczby(int b[],int k)
{
	int i;
	cout<<"Oto liczby zapisane w tablicy:\n\n";
	for (i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
	system("PAUSE");
	return;
}



void sortuj_s(int b[], int p, int k){
int l=p;
int r=k;
int i;
int j;
int piwot;
if(r <= l) return;
i = l - 1;
j = r + 1,
piwot = b[(l+r)/2];
	while(1)
	{
		while (piwot>b[++i]);
		while (piwot<b[--j]);
		if ( i <= j)
			swap(b[i],b[j]);
		else
			break;
	}

	if(j > l)
	sortuj_s(b, l, j);
	if(i < r)
	sortuj_s(b, i, r);
}

int main()
{
	char w;
	int a[200000],i,n;
	for (i=0;i<200000;i++) a[i]=0;
	cout<<"\nWybierz ilosc liczb: ";
    cin>>n;
	do
	{
		cout<<"Wybierz co chcesz zrobic:";
		cout<<"\n1. Generowanie liczb - 1";
		cout<<"\n2. Wyswietlenie liczb z tablicy - 2";
		cout<<"\n3. Sortowanie szybkie - 3";
		cout<<"\n4. Koniec - 4\n";
		cin>>w;
		switch (w)
		{
			case '1' : generuj_liczby(a,n);break;
			case '2' : wyswietl_liczby(a,n);break;
			case '3' : sortuj_s(a,0,n-1); break;
		}
		cout<<"\n";
	} while (w!='4');
	return 0;
}
