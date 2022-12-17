#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int liczba_elementow,a;
    int maks = 0;
    cout << "Podaj liczbe elementow vectora: ";
    cin >> liczba_elementow;
    vector <int> sorted;
    vector <int> basic;
    vector <int> najw_liczby;
    cout << "Podaj elementy tablicy: " << endl;
    for (int i = 0; i < liczba_elementow; i++) {
        cin >> a;
        basic.push_back(a);
        sorted.push_back(a);
    }

    sort(sorted.begin(), sorted.end());

    /*
    cout << endl;
    for (int i = 0; i < liczba_elementow; i++) {
        cout << basic[i] << " ";
    }

    cout << endl;
    for (int i = 0; i < liczba_elementow; i++) {
        cout << sorted[i] << " ";
    }
    */

    cout << endl <<  "Maksymalna wartosc wektora to: " << sorted[liczba_elementow - 1];

    for (int i = 0; i < liczba_elementow; i++) {
        if (sorted[liczba_elementow - 1] == basic[i]) {
            maks++;
            najw_liczby.push_back(i);
        }
    }

    if (maks > 1) {
        cout << endl << "Najwiekszych elementow bylo " << maks << "." << endl << "Znalazly sie one na indeksach : ";
        for (int i = 0; i < najw_liczby.size(); i++) {
            cout << "[" << najw_liczby[i] << "] ";
        }
    }
    else if (maks == 1) {
        cout << "Najwiekszy element znajdowal sie na indeksie: " << najw_liczby[0];
    }
    



    

    return 0;
}




