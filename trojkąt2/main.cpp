#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
   int nrk, nrw, h,i,j,a;
   cout<<"Number kolumny:";
   cin>>nrk;
    cout<<"Number wiersza:";
   cin>>nrw;
    cout<<"Wysokosc trojkata (liczba nieparzysta):";
   cin>>h;
   system("CLS");
   if(h%2==1)
   {
        for (i=0;i<nrw-1;i++) cout<<"\n";
        for (i=0;i<h;i++)
        {
            a=i;
            if(i<(h+1)/2)
            {
            for (j=0;j<nrk-1;j++) cout<<" ";
            for (j=0;j<=i;j++) cout<<"*";
                cout<<"\n";
            }
            else
            {
            for (j=0;j<nrk-1;j++) cout<<" ";
            for (a;a<h;a++) cout<<"*";
            cout<<"\n";
            }
        }
    }
    else cout<<"Wysokosc musi byc liczba nieparzysta";


    cout<<"\n\n\n";
    return 0;
}
