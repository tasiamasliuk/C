#include <iostream>

using namespace std;

int main()
{
    cout<< "Program ten wyswietla przeciecia zera wybranych liczbach"<<endl;
    cout<< "Wskaz liczbe, ile razy ma wyswietlic sie program: ";
    int n;
    cin>> n;
    for (int i=0; i<n; i++)
    {
        cout<< "Wskaz 4 przykladowe liczby"<<endl;
        cout<< "Wskaz liczbe a: ";
        int a;
        cin>> a;
        cout<< "Wskaz liczbe b: ";
        int b;
        cin>> b;
        cout<< "Wskaz liczbe c: ";
        int c;
        cin>> c;
        cout<< "Wskaz liczbe d: ";
        int d;
        cin>> d;
        int zmienna_pomocnicza = 0;
        if (a>0 && b<0 || a<0 && b>0)
        {
            cout<< "Wystapilo przeciecie zera pomiedzy liczbami "<<a<<" i "<<b<<endl;
            zmienna_pomocnicza++;
        }
        if (b>0 && c<0 || b<0 && c>0)
        {
            cout<< "Wystapilo przeciecie zera pomiedzy liczbami "<<b<<" i "<<c<<endl;
            zmienna_pomocnicza++;
        }
        if (c>0 && d<0 || c<0 && d>0)
        {
            cout<< "Wystapilo przeciecie zera pomiedzy liczbami "<<c<<" i "<<d<<endl;
            zmienna_pomocnicza++;
        }
        if (a>0 && c<0 && b==0 || a<0 && c>0 && b==0)
        {
            cout<< "Wystapilo przeciecie zera pomiedzy liczbami "<<a<<" i "<<c<<endl;
            zmienna_pomocnicza++;
        }
        if (b>0 && d<0 && c==0 || b<0 && d>0 && c==0)
        {
            cout<< "Wystapilo przeciecie zera pomiedzy liczbami "<<b<<" i "<<d<<endl;
            zmienna_pomocnicza++;
        }
        if (a>0 && d<0 && b==0 && c==0 || a<0 && d>0 && b==0 && c==0)
        {
            cout<< "Wystapilo przeciecie zera pomiedzy liczbami "<<a<<" i "<<d<<endl;
            zmienna_pomocnicza++;
        }
        if(zmienna_pomocnicza>0)
        {
            cout<< "Lacznie przeciec zera wystapilo: "<<zmienna_pomocnicza<<endl;
        }
        else
        {
            cout<< "Nie wystapilo zadne przeciecie zera"<<endl;
        }
        cout<<endl;
    }
    return 0;
}
