#include <iostream>

using namespace std;
int main()
{
    int rok;
    int mie;


cout << "Podaj rok" << endl;
cin >> rok;
cout << "Podaj miesiac" << endl;
cin >> mie;

cout << "Liczba dni w miesiacu wynosi:";
if((rok%4==0)&&(mie==2)) cout << "28";
    else if(mie==2) cout << "29";
        else if(mie==1||mie==3||mie==5||mie==7||mie==8||mie==10||mie==12) cout << "31";
            else if(mie>12) cout << "bledne dane";
                else cout << "30";

}
