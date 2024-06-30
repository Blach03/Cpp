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
    cout<<"Wysokoœæ trojkota:";
   cin>>h;
   a=1;
   system("CLS");
    for (i=0;i<nrw-1;i++) cout<<"\n";
        for (i=0;i<h;i++)
        {
            for (j=0;j<nrk-a;j++) cout<<" ";
            for (j=0;j<=i;j++) cout<<"*";
        a++;
        cout<<"\n";
    }
    cout<<"\n\n\n";
    return 0;
}
