#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  string liczby = " 243 4 1 12";
  string *str_arr = new string [liczby.length()];

  char *p_licz = &liczby[1];
  char *p_arr = &str_arr[0][0];
	
  p_licz++;
  *p_arr = *p_licz;
  cout << *p_arr << endl;
  p_licz = NULL;
  p_licz = &liczby[1];
  cout << p_licz[1] << endl;
  p_licz++;
  cout << p_licz[0] << endl;

  delete [] str_arr;
  p_licz = NULL;
  p_arr = NULL;

  cin.get();
  return 0;
}
