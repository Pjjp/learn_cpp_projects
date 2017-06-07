#include <iostream>
#include <string>
#include <cmath>

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

void Sortowanie(int tab[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (abs(tab[j]) > abs(tab[j + 1]))
				swap(tab[j], tab[j + 1]);
		}
	}
	for (int i = 0; i < size; i++) {
			for (int j = 0; j < size - 1; j++) {
				cout << tab[j] << endl;
			}
		}
}

int main() {
	int x = 0, y = 0, nr = 0;
	string liczby = " 243 4 1 -12";
	string strTab[liczby.length()];
	int *iLiczby = new int[liczby.length()];
	int *startILiczby = &iLiczby[0];

	for (int var1 = 0; var1 < liczby.length() + 1; ++var1) {
		if (namber_or_no(liczby[var1]) == true
				&& liczby[var1 - 1] == (char) 32) {
			x = var1;
		}
		if (namber_or_no(liczby[var1]) != true) {
			y = var1;
			strTab[nr] = liczby.substr(x, y - x);
			nr++;
		}
		if (var1 == NULL) {
			y = var1;
			strTab[nr] = liczby.substr(x, y - x);
		}
	}
	for (int var = 0; var < liczby.length(); ++var) {
		if (strTab[var].empty() == false) {
			*iLiczby = stoi(strTab[var]);
			iLiczby++;
		}
	}
	iLiczby = startILiczby;
	int size=0;
	while (*iLiczby) {
		cout << *iLiczby << endl;
		iLiczby++;
		size++;
	}
	cout << "------------------------------------" << endl;

	iLiczby = startILiczby;
	Sortowanie(iLiczby, size);

	delete iLiczby;
	cin.get();
	return 0;
}
