#include <iostream>

using namespace std;

int main()
{
    float wygr,przeg,pot,ranga,feed,down,m,i,s=0;
    cout << "Uszlachetnianie\n";
    cout << "Ile wygrales gier?\n";
    cin >> wygr;
    cout << "Ile przegrales gier?\n";
    cin >> przeg;
    cout << "Wygrane gry:\n";
    for(i=0;wygr>i;i++)
    {
        cout << "Gra " <<i+1<<"\n";
        cout << "W jakim stopniu sie pociles od 1-maly pot do 5-duzy pot\n";
        cin >> pot;
        cout << "Na jakie rangi grales 1-iron 5-plat\n";
        cin >> ranga;
        cout << "W jakim stotniu nafeedowales 1-es carry 5-feed wchuj\n";
        cin >> feed;
        cout << "W jakim stopniu twoj team mial downa 1-nic 5-rak\n";
        cin >> down;
        ranga=5*(1/ranga);
        pot=8*(1/pot);
        if(pot>=3&&feed>=3) pot=2*pot;
        s=s+pot+ranga+0.7*feed+down;
    }
    cout << "Przegrane gry:\n";
    for(i=0;przeg>i;i++)
    {
        cout << "Gra " <<i+1+wygr<<"\n";
        cout << "W jakim stopniu sie pociles od 1-maly pot do 5-duzy pot\n";
        cin >> pot;
        cout << "Na jakie rangi grales 1-iron 5-plat\n";
        cin >> ranga;
        cout << "W jakim stopniu nafeedowales 1-es carry 5-feed wchuj\n";
        cin >> feed;
        cout << "W jakim stopniu twoj team mial downa 1-nic 5-rak\n";
        cin >> down;
        ranga=5*(1/ranga);
        if(pot>=3&&feed>=3) pot=2*pot;
        s=s+1.2*(pot+ranga+0.7*feed+down);
    }
    if(s<8) cout<<"Chlop zwykly (z chlopska morda)\n";
    else if (s>=8&&s<16) cout<<"Chlop uwlaszczony\n";
    else if (s>=16&&s<33) cout<<"Golota\n";
    else if (s>=33&&s<56) cout<<"Szlachta zagrodowa\n";
    else if (s>=56&&s<80) cout<<"Ziemianstwo\n";
    else if (s>=80&&s<125) cout<<"Magnateria\n";
    else if (s>=125&&s<200) cout<<"Ksiaze\n";
    else if (s>=200) cout<<"Krol\n";

    cout <<"Wynik punktowy:"<<s<<"\n";
    system("PAUSE");
    return 0;
}
