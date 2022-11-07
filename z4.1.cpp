#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int rozm,pomoc;
	

	cout << "Podaj rozmiar tablicy: ";
	cin >> rozm;

	vector <int> tablica;

	cout << "Podaj elementy tablicy: " << endl;

	for (int i = 0; i < rozm; i++) {
		cin >> pomoc;
		tablica.push_back(pomoc);
	}

	for (int i = 0; i < rozm; i++) {
		if (i<rozm-1 && tablica[i] > tablica[i + 1]) {
			pomoc = tablica[i];
			tablica[i] = tablica[i + 1];
			tablica[i + 1] = pomoc;
			i = -1;
		}
	}

	cout << "Najwiekszy element to: " << tablica[tablica.size()-1];

	return 0;
}