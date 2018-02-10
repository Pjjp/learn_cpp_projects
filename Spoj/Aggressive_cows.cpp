#include <iostream>
#include <cmath>

using namespace std;

struct Stall{
  int x; //position of stall
  bool c; //is cow or not
};

void q_sort( Stall tab[], int left, int right ) //for struct
{
    int i = left;
    int j = right;
    int y = tab[( left + right ) / 2 ].x;
    do{
        while( tab[i].x < y ) i++;
        while( tab[j].x > y ) j--;
        if( i <= j )  {
            swap( tab[i], tab[j] );
            i++;
            j--;
        }
    } while( i <= j );

    if( left < j ) q_sort( tab, left, j );
    if( right > i ) q_sort( tab, i, right );
}

int min_width(Stall tab[], int stalls){ //minmum width for cow for stall
    int min_w=stalls;
    for(int a=0; a<stalls; a++){
        if(tab[a].c==true) {
            for(int b=1; b<=(stalls-a); b++){
                if(tab[a+b].c==true) {
                    if(abs(tab[a].x-tab[a+b].x) < min_w){ //! sprawdź
                    min_w=abs(tab[a].x-tab[a+b].x);
                    break;
                    }
                }
            }
        }
    }
    return min_w;
}

void cow_sort(Stall tab_org[], int cows, int stalls){
    for(int i=0; i <cows; i++){
        tab_org[i].c=true;
    }
    Stall tab_cop[stalls];

    for(int i=0; i<stalls; i++){
        tab_cop[i].x = tab_org[i].x;
        tab_cop[i].c = tab_org[i].c;
    }
    /////////////////////////////////////////////////////////////////////
    for(int a=cows; a>0; a--){
        for(int b=(a+1); b<=stalls; b++){
            tab_cop[b-1].c=false;
            tab_cop[b].c=true;
            if(min_width(tab_org, stalls)<min_width(tab_cop, stalls)){
                tab_org[b-1].c=false;
                tab_org[b].c=true;
            }
        }
    }
}

int main(){
    int nam_of_test_cases;
    int n; //number of stalls
    int c; //number of cows
    cin >> nam_of_test_cases;
    for(int i=0; i<1; i++){
          cin >> n >> c;
          Stall s[n];
          for(int i=0; i<n; i++){
              int pos; //position of stall
              cin >> pos;
              s[i] ={pos, false};
          }
          q_sort(s, 0, n-1);
          cow_sort(s, c, n);
          cout << min_width(s, n);

          //for(int i=0; i<n; i++){
              //cout<< s[i].x << "  " << s[i].c << endl;
          //}
          //cout << "min w: " << min_width(s, n);

          cin.clear();
          cin.ignore();
          cin.get();

    }
    return 0;
}
