

#include <iostream>

using namespace std;

int main()
{
    int liczba_kawalkow, liczba_gosci, kawalki_na_osobe;
    cout << "na ile kawalkow podzielono pizze ";
    cin >> liczba_kawalkow;
    if (liczba_kawalkow % 2 == 1) {
        cout << "nie da sie podzielic pizzy na tyle kawalkow";
        return 0;
    }

    cout << "ile uczestnikow jest na imprezie ";
    cin >> liczba_gosci;

    kawalki_na_osobe = liczba_kawalkow / liczba_gosci;

    cout << "kazdy dostanie po " << kawalki_na_osobe << " kawalkow. Dla gospodarza zostanie " << liczba_kawalkow % liczba_gosci << " kawalkow";

    return 0;
}

