#include <iostream>
using namespace std;

int main() 
{
    
   
    int m= 0, n= 0;

    double **T = new double*[m];
    for(int i = 0; i < m; ++i) T[i] = new double[n];
    
    
    
    for(int i = 0; i < m; ++i) delete [] T[m];
    delete [] T;
   
    
       
return 0;
}
