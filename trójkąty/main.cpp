#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   int  nrw, h,i,j;
   float a, nrk;
   a=1;
   cout<<"Numer kolumny:";
   cin>>nrk;
    cout<<"Numer wiersza:";
   cin>>nrw;
    cout<<"Wysokosc trojkata:";
   cin>>h;
   system("CLS");
   if(nrk<h) cout << "Wysokosc nie moze byc wieksza od numeru kolumny";
   else
    {
        for (i=0;i<nrw-1;i++) cout<<"\n";
        for (i=0;i<h;i++)
        {
            for (j=0;j<nrk-a;j++) cout<<" ";
            for (j=0;j<=i;j++) cout<<"*";
            for (j=0;j<=i-1;j++) cout<<"*";
            cout<<"\n";
            a++;
        }
    }
    cout<<"\n\n\n";
    return 0;
}
