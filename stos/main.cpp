#include <iostream>
#include <cstdlib>

using namespace std;

struct element
{
    int dane;
    element* nastepny;
};

void zapisz_stos(element* (&ws)) {
	int i;
	element* pom;
	pom = new element;
	cout << "\nPodaj liczbe calkowita: ";
	cin >> i;
	pom->dane=i;
	pom->nastepny = ws;
	ws = pom;
}

void zdejmij_ze_stosu(element* (&ws)) {
	element* pom;
	if (ws==NULL) cout << "Stos jest pusty...\n";
	else 	{
				cout << "Zdejmowany element to: "<<ws->dane<<"\n";
				pom = ws;
				ws = ws->nastepny;
				delete pom;
			}
	system("PAUSE");
}

void wyswietl_stos(element* ws) {
	element* pom;
	pom = ws;
	system("CLS");
	if (pom==NULL) cout << "Stos jest pusty...\n";
	else while (pom!=NULL)
			{
				cout << pom->dane << "\n";
				pom = pom->nastepny;
			}
	system("PAUSE");
	return;
}

void usun_stos(element* (&ws)) {
	element *pom;
	while (ws!=NULL)
    {
        pom = ws;
        ws = ws->nastepny;
        delete pom;
    }
}

int main() {
  char w='p';
  element* wierzch;
  wierzch = NULL;
  do {
	system("CLS");
	cout<<"\n1. Zapisz na stos - 1";
	cout<<"\n2. Zdejmij ze stosu - 2";
	cout<<"\n3. Wyswietl zawartosc stosu - 3";
	cout<<"\n4. Koniec - 4\n\n";
	cin >> w;
	switch (w) {
		case '1' : zapisz_stos(wierzch);
					break;
		case '2' : zdejmij_ze_stosu(wierzch);
					break;
		case '3' : wyswietl_stos(wierzch);
					break;
	}
  } while (w!='4');
  usun_stos(wierzch);
  return 0;
}
