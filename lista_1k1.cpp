#include <iostream>
#include <fstream>

using namespace std;

struct element
{
    int dane;
    element* nast;
};

void wyswietl_liste(element* gl) {
	element* pom;
	int i=1;
	pom = gl;
	system("CLS");
	if (pom==NULL) cout << "Lista jest pusta...\n";
	else {
		cout<<"Nr elementu		Element listy\n";
		while (pom!=NULL)
			{
				cout <<"\t"<<i<<"\t\t"<< pom->dane << "\n";
				pom = pom->nast;
				i++;
			}
	}
	system("PAUSE");
	return;
}


void dodaj_p(element* (&gl)) {
	element* pom;
	pom = new element;
	cout << "\nPodaj liczbe calkowita: ";
	cin >>pom->dane;
	pom->nast = gl;
	gl = pom;
}


void dodaj_k(element* (&gl)) {
	element *pom, *pom1;
	pom = new element;
	cout << "\nPodaj liczbe calkowita: ";
	cin >>pom->dane;
	pom->nast=NULL;
	if (gl==NULL) gl=pom;
	else {
		pom1=gl;
		while (pom1->nast!=NULL) pom1=pom1->nast;
		pom1->nast=pom;
	}
}

void dodaj_sr(element* (&gl)) {
	int n;
	wyswietl_liste(gl);
	cout<<"Podaj nr elementu po ktorym chcesz dodac element: ";
	cin >> n;
	if (n==0) dodaj_p(gl);
	else {
		int j;
		element *pom, *pom1;
		pom = new element;
		cout << "\nPodaj liczbe calkowita: ";
		cin >>pom->dane;
		pom->nast=NULL;
		pom1=gl;
		for (j=1;j<n;j++) pom1=pom1->nast;
		pom->nast=pom1->nast;
		pom1->nast=pom;
	}
}

void usun_p(element* (&gl)) {
	if (gl!=NULL) {
		element* pom;
		pom = gl;
		gl = gl->nast;
		delete pom;
	}
}

void usun_k(element* (&gl)) {
	if (gl!=NULL) {
		if (gl->nast==NULL) {delete gl; gl=NULL;}
		else {
			element* pom;
			pom = gl;
			while (pom->nast->nast!=NULL) pom=pom->nast;
			delete pom->nast;
			pom->nast=NULL;
        }
    }
}

void usun_sr(element* (&gl)) {
	int n;
	wyswietl_liste(gl);
	cout<<"Podaj nr elementu ktory chcesz usunac: ";
	cin >> n;
	if (n!=0) {
		if (n==1) usun_p(gl);
		else {
			int j;
			element *pom,*pom1;
			pom=gl;
			for (j=1;j<n-1;j++) pom=pom->nast;
			pom1=pom->nast;
			pom->nast=pom->nast->nast;
			delete pom1;
		}
	}
}

void usun_liste(element* (&gl)) {
	element *pom;
	while (gl!=NULL) {
		pom=gl;
		gl=gl->nast;
		delete pom;
	}
}

void odczyt_plik(element *(&gl))
{    if (gl!=NULL) {
			cout<<"\nLista jest niepusta\n";
			cout<<"Usun najpierw liste\n";
	}  else {
		ifstream plik;
		element *pom,*pom1;
		plik.open("liczby.rob", ios::in);
		while (!plik.eof())
		{
			pom = new element;
			if (plik >> pom->dane) {
				pom->nast=NULL;
				if (gl==NULL) {
						gl=pom;
						pom1=pom;
				} else {
					pom1->nast=pom;
					pom1=pom;
				}
			} else delete pom;
		}
		plik.close();
	}
	
}

void zapisz_plik(element *gl)
{   ofstream plik;
    plik.open("liczby.rob", ios::out);
    while (gl != NULL)
    {   plik << gl->dane;
		if (gl->nast!=NULL) plik<<endl;
        gl = gl->nast;
    }
    plik.close();
}

int main() {
  char w='p';
  element* glowa_l;
  glowa_l = NULL;
  do {
	system("CLS");
	cout<<"\n1. Wyswietl liste - 1";
	cout<<"\n2. Dodaj na poczatku listy - 2";
	cout<<"\n3. Dodaj na koncu listy - 3";
	cout<<"\n4. Dodaj w srodku listy - 4";
	cout<<"\n5. Usun z poczatku listy - 5";
	cout<<"\n6. Usun z konca listy - 6";
	cout<<"\n7. Usun ze srodka listy - 7";
	cout<<"\n8. Wczytaj liste z pliku - 8";
	cout<<"\n9. Zapisz do pliku - 9";
	cout<<"\n10. Usun liste - u";
	cout<<"\n11. Koniec - k\n\n";
	cin >> w;
	switch (w) {
		case '1' : wyswietl_liste(glowa_l);
					break;
		case '2' : dodaj_p(glowa_l);
					break;
		case '3' : dodaj_k(glowa_l);
					break;
		case '4' : dodaj_sr(glowa_l);
					break;
		case '5' : usun_p(glowa_l);
					break;
		case '6' : usun_k(glowa_l);
					break;
		case '7' : usun_sr(glowa_l);
					break;
		case '8' : odczyt_plik(glowa_l);
					break;
		case '9' : zapisz_plik(glowa_l);
					break;
		case 'u' : case 'U': usun_liste(glowa_l);
					break;
	}
  } while (w!='k'&& w!='K');
   usun_liste(glowa_l);
  return 0;
}

