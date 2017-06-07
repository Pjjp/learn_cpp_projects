#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool namber_or_no(char znak) {
	bool a = false;

	for (int i = 48; i < 58; i++) {
		if (znak == (char) i)
			a = true;
	}
	if ((znak == (char) 43) || (znak == (char) 45)) {
		a = true;
	}
	if (a == true)
		return true;
	else
		return false;
}

int Sortowanie(int tab[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (abs(tab[j]) > abs(tab[j + 1]))
				swap(tab[j], tab[j + 1]);
		}
	}
	return tab[0];
}

int main()
{
    int n; // the number of temperatures to analyse
    int x = 0, y = 0, nr = 0;
	string temps; // the n temperatures expressed as integers ranging from -273 to 5526

	cin >> n; cin.ignore();
    getline(cin, temps);
	string strTab[temps.length()];
	int *itemps = new int[temps.length()];
	int *startItemps = &itemps[0];

    for (int var1 = 0; var1 < temps.length() + 1; ++var1) {
    		if (namber_or_no(temps[var1]) == true
    				&& temps[var1 - 1] == (char) 32) {
    			x = var1;
    		}
    		if (namber_or_no(temps[var1]) != true) {
    			y = var1;
    			strTab[nr] = temps.substr(x, y - x);
    			nr++;
    		}
    		if (var1 == NULL) {
    			y = var1;
    			strTab[nr] = temps.substr(x, y - x);
    		}
    	}
    	for (int var = 0; var < temps.length(); ++var) {
    		if (strTab[var].empty() == false) {
    			*itemps = stoi(strTab[var]);
    			itemps++;
    		}
    	}
    	itemps = startItemps;
    	int size=0;
    	while (*itemps) {
    		itemps++;
    		size++;
    	}

    	itemps = startItemps;
    	cout << Sortowanie(itemps, size) << endl;

    	delete itemps;
    	cin.get();
    	return 0;
}
