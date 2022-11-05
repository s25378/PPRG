
#include <iostream>


using namespace std;

int dwumian(int wiersz, int kolumna);
int silnia(int a);

int main()
{
    int wiersz;
    cout << "Podaj liczbe wierszy do trojkata pascala: ";
    cin >> wiersz;

    for (int i = 0; i < wiersz; i++) {
        for (int x = wiersz - i; x > 0; x--) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << dwumian(i, j) << "  ";
        }
        cout << endl;
    }
}

int dwumian(int wiersz, int kolumna) {
    return (silnia(wiersz) / (silnia(kolumna) * silnia(wiersz - kolumna)));
}

int silnia(int a) {
    int wynik = 1;
    for (int i = a; i > 0; i--) {
        wynik = wynik * i;
    }

    return wynik;
}
