#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b;
    float c,d=0;
    {
        cout << "Podaj ilosc liczb\n";
        cin >> a;
        b=a;
        cout << "Podaj liczby\n";
        do
        {
            cin >> c;
            d=d+c;
            a=a-1;
        }
        while(a>0);
    cout << "\nSrednia arytmetyczna tych liczb wynosi "<<d/b;
    }
}
