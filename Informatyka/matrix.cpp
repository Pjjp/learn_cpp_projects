#include <iostream>
using namespace std;
int macierz[100][100];
void wczytaj(int a, int b)
{
    for(int i=0;i<a;i++)
    {
        for(int x=0; x<b; x++)
        {
            cin>>macierz[i][x];
        }
    }
}

void wypisz(int a, int b)
{
    for(int i=0;i<a;i++)
    {
        for(int x=0; x<b; x++)
        {
            cout<<macierz[i][x]<<"\t";
        }
        cout<<endl;
    }
}
int oblicz(int a, int b)
{
    int w=0, il=0, il_r=0, r=0;
    for(int i=0;i<a;i++)
    {
        il=macierz[0][i%3]*macierz[1][(i+1)%3]*macierz[2][(i+2)%3];
        w+=il;
    }
    for(int i=0;i<a;i++)
    {
        il_r=macierz[0][(i+2)%3]*macierz[1][(i+1)%3]*macierz[2][i%3];
        r+=il_r;
    }
    return w-r;
}

int main()
{
    int a=0, b=0;

    cin>>a>>b;

    wczytaj(a, b);
    wypisz(a, b);

    cout<<"Wyznacznik macierzy: "<<oblicz(a, b);
    return 0;
}
