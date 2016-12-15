#include<iostream>
#include<ctime>
 
#include<cmath>
using namespace std;
void wczytaj(double **T, int m, int n)
{
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
                    T[i][j]= ((rand()*100)%3455)/100.0-8.55;
        }
    }
}
void wypisz(double **T, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<T[i][j]<<"\t";
        }
        cout<<endl<<endl;
    }
}
double suma(double **T, int m, int n)
{
    double s=0;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
                   if(i%2!=0) s+=T[i][j];
        }
    }
    return s;
}
void roznica(double **T, int m, int n)
{
    double s=0;
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
                   if(T[i][j]<0) T[i][j]-=2;  
        }
    }
}
void czy(double **T, int m, int n)
{   
    int p=0;
  for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
                   if(T[i][j]>10)
                   {
                       cout << "Wszystkie elementy tablicy nie sa mniejsze od 10";
                       p=1;
                        break;
                   }
            if(p==1) break;
        }
                
    }
}

main()
{
    srand(time(NULL));
    int m= 0, n= 0;
    cin >> m >> n;
    
    double** T = new double*[m];
      for(int i=0;i<m;++i) T[i]=new double[n];
 
    wczytaj(T, m, n);
    cout<<"Tablica:"<<endl<<endl;
    wypisz(T, m, n);
    
    cout<<"Suma elemetow lezacych w nieparzystych wierszach:"<<suma(T, m, n)<<endl;
    
    czy(T, m, n);
    
    cout<<endl<<"Nowa tablica:"<<endl<<endl;
    roznica(T, m, n);
    wypisz(T, m, n);
    cout << "wielka kupa gowna";
  
        
    
    
   
    
    
 
    for(int i=0;i<m;++i) delete []T[m];
    delete []T;
    
    cin.ignore();
    cin.get();
    return 0;
}
