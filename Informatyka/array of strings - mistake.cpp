#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  string liczby = " 243 4 1 12";
  string *str_arr = new string [liczby.length()];

  char *p_licz = &liczby[0];
  char *p_arr = &str_arr[0][0];
	
	str_arr[0][0] = '1';
	str_arr[0][1] = '2';
	str_arr[0][2] = '3';
	str_arr[0][3] = '4';
	str_arr[1][0] = '5';
	str_arr[1][1] = '6';
	str_arr[1][2] = '7';
	
	cout << str_arr[0][0] << endl;
	cout << str_arr[0][1] << endl;
	cout << str_arr[0][2] << endl;
	cout << str_arr[0][3] << endl;
	cout << str_arr[1][0] << endl;
	cout << str_arr[1][1] << endl;
	cout << str_arr[1][2] << endl;
	
	
  delete [] str_arr;
  p_licz = NULL;
  p_arr = NULL;
  
  cin.get();
  return 0;
}
