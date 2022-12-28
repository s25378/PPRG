#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int szerokosc, wysokosc;
    int a = 1;
    int zm1, zm2;

    cout << "Podaj szerokosc tablicy: ";
    cin >> wysokosc;
    cout << "Podaj wysokosc tablicy: ";
    cin >> szerokosc;
    int default_value = 0;
    vector<int> v(szerokosc, default_value);
    vector<vector<int>> tablica(wysokosc, v);

    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            tablica[j][i] = a;
            a++;
        }
        cout << endl;
    }
    
    cout << "Podaj elementy tablicy: " << endl;

    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            cin >> tablica[j][i];
        }
        //cout << endl;
    }
    


    cout << endl;
    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            cout << tablica[j][i] << "  ";
        }
        cout << endl;
    }

    

    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc/2; j++) {
            zm1 = tablica[j][i];
            zm2 = tablica[wysokosc - j - 1][i];
            tablica[j][i] = zm2;
            tablica[wysokosc - j - 1][i] = zm1;
        }
        //cout << endl;
    }
    cout << endl;
    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            cout << tablica[j][i] << "  ";
        }
        cout << endl;
    }



    return 0;
}



