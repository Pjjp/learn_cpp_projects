#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

 void quicksort(int *tablica, int lewy, int prawy)
 {
     int v=tablica[(lewy+prawy)/2];
     int i,j,x;
     i=lewy;
     j=prawy;
     do
     {
         while(tablica[i]<v) i++;
         while(tablica[j]>v) j--;
         if(i<=j)
         {
             x=tablica[i];
             tablica[i]=tablica[j];
             tablica[j]=x;
             i++;
             j--;
         }
     }
     while(i<=j);
     if(j>lewy) quicksort(tablica,lewy, j);
     if(i<prawy) quicksort(tablica, i, prawy);
 }

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    string temps; // the n temperatures expressed as integers ranging from -273 to 5526
    getline(cin, temps);

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    int ile;

     cout<<"Ile losowych liczb w tablicy: ";
     cin>>ile;

     //dynamiczna alokacja tablicy
     int *tablica;
     tablica=new int [ile];

     int *tablica2;
     tablica2=new int [ile];

     //inicjowanie generatora
     srand(time(NULL));

     //wczytywanie losowych liczb do tablicy
     for(int i=0; i<ile; i++)
     {
         tablica[i] = rand()%100000+1;
     }

     //przepisanie tablicy do tablicy2
     for(int i=0; i<ile; i++)
     {
        tablica2[i]=tablica[i];
     }

    cout << "result" << endl;
}
