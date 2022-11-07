#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int rozm,pomoc;
	

	cout << "Podaj rozmiar tablicy: ";
	cin >> rozm;

	vector <int> tablica;
	vector <int> elementy;
	vector <int> liczba_elementow;
	vector <int> liczba_elementow_sort;

	cout << "Podaj elementy tablicy: " << endl;

	for (int i = 0; i < rozm; i++) {
		cin >> pomoc;
		tablica.push_back(pomoc);
	}

	pomoc = 0;


	for (int i = 0; i < rozm; i++) {
		if (i<rozm - 1 && tablica[i] > tablica[i + 1]) {
			pomoc = tablica[i];
			tablica[i] = tablica[i + 1];
			tablica[i + 1] = pomoc;
			i = -1;
		}
	}

	pomoc = 0;

	
	for (int i = 0; i < rozm; i++) {
		if (i < tablica.size()-1 && tablica[i] != tablica[i + 1]) {
			elementy.push_back(tablica[i]);
		}
	}
	elementy.push_back(tablica[tablica.size() - 1]);

	cout << endl;

	for (int i = 0; i < elementy.size(); i++) {
		liczba_elementow.push_back(0);
		for (int j = 0; j < tablica.size(); j++) {
			if (elementy[i] == tablica[j]) {
				liczba_elementow[i]++;
			}
		}
	}

	for (int i = 0; i < liczba_elementow.size(); i++) {
		liczba_elementow_sort.push_back(liczba_elementow[i]);
	}

	for (int i = 0; i < liczba_elementow_sort.size(); i++) {
		if (i<liczba_elementow_sort.size() - 1 && liczba_elementow_sort[i] > liczba_elementow_sort[i + 1]) {
			pomoc = liczba_elementow_sort[i];
			liczba_elementow_sort[i] = liczba_elementow_sort[i + 1];
			liczba_elementow_sort[i + 1] = pomoc;
			i = -1;
		}
	}

	pomoc = 0;

	for (int i = 0; i < liczba_elementow.size(); i++) {
		if (liczba_elementow[i] == liczba_elementow_sort[liczba_elementow_sort.size() - 1]) {
			if (pomoc == 0) {
				cout << "Najwiecej jest: " << elementy[i];
				pomoc++;
			}
			else {
				cout << " oraz " << elementy[i];
			}
		}
	}

	return 0;
}