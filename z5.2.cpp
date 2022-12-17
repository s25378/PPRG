#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int szerokosc, wysokosc;
    int a=1;
    
    cout << "Podaj wysokosc tablicy: ";
    cin >> wysokosc;
    cout << "Podaj szerokosc tablicy: ";
    cin >> szerokosc;
    int default_value = 0;
    vector<int> v(szerokosc, default_value);
    vector<vector<int>> tablica(wysokosc, v);
    
    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            tablica[j][i]=a;
            a++;
        }
        cout << endl;
    }

  
    
    for (int i = 0; i < szerokosc; i++) {
        for (int j = 0; j < wysokosc; j++) {
            cout << tablica[j][i] << "  ";
        }
        cout << endl;
    }
    
    /*
    cout << "Podaj elementy tablicy: " << endl;
    for (int i = 0; i < liczba_elementow; i++) {
        cin >> a;
        basic.push_back(a);
        sorted.push_back(a);
    }
    */
    

    return 0;
}




