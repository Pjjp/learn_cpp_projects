#include<iostream>
#include<ctime>
 
#include<cmath>
using namespace std;
void wczytaj(double **T, int m, int n)
{
     for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
                    T[i][j]= i*j;
        }
    }
}
void wypisz(double **T, int m, int n)
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<T[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}
 
main()
{
    srand(time(NULL));
    int m= 0, n= 0;
    cin >> m >> n;
 
    double** T = new double*[m+1];
      for(int i=0;i<m;++i) T[i+1]=new double[n];
 
    wczytaj(T, m, n);
    cout<<"Tabliczka:"<<endl<<endl;
    wypisz(T, m, n);
 
 
 
    for(int i=0;i<m;++i) delete []T[m+1];
    delete []T;
 
    cin.ignore();
    cin.get();
    return 0;
}
