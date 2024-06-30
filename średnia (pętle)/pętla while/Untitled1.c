#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int a,e;
    float b,c=0,d;
{
    cout << "Podaj ilosc liczb\n";
    cin >> a;
    e=a;
    cout << "Podaj liczby\n";
    for(a=a;a>0;a=a-1)
    {
        cin >> b;
        c=b+c;
    }

    cout << "\nSrednia arytmetyczna tych liczb wynosi "<<c/e;
}
}

