#include <iostream>

int main()
{
using namespace std;

int fahr;
cout << "Podaj temperature w stopniach Fahrenheita: ";
cin >> fahr;

double celcjusz;
celcjusz = (fahr - 32.0)/1.8;
cout << "W stopniach celcjusza wynosi: " << celcjusz << endl;
}
