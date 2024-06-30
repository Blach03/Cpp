#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a,b;
    float c,d=0;
    cout << "Podaj ilosc liczb\n";
    cin >> a;
    b=a;
    cout << "Podaj liczby\n";
    while(a>0)
    {
        cin >> c;
        d=c+d;
        a=a-1;
    }
cout << "\nSrednia arytmetyczna tych liczb wynosi "<<d/b;

}
