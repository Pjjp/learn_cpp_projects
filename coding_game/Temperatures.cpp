#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool namber_or_no(char *znak)
{
  bool a = false;

  for(int i=43; i<58; i++)
  {
    if( *znak == (char) i ) a = true;
  }
  if( a == true ) return true;
  else return false;
}

int main()
{
  int x = 0;
  string liczby = " 243 4 1 12";
  string *str_arr = new string [liczby.length()];

  char *p_licz = &liczby[0];
  char *p_arr = &str_arr[x][0];

  while(*p_licz)
  {
    while( namber_or_no(p_licz) == true )
    {
      *p_arr = *p_licz;
      p_arr++; p_licz++;
    }
    p_arr = &str_arr[++x][0];
    p_licz++;
  }

  p_arr = &str_arr[0][0];

  while(*p_arr)
  {
    cout <<  *p_arr;
    p_arr++;
  }


  cout << endl << endl;

  cin.get();
  return 0;
}
