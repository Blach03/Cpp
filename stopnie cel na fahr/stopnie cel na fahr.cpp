#include <iostream>

int main()
{
using namespace std;

int cel;
cout << "Podaj temperature w stopniach celsjusza: ";
cin >> cel;

double fahrenheit;
fahrenheit = 1.8 * cel + 32.0;
cout << "W stopniach Fahrenheit wynosi: " << fahrenheit << endl;
}
