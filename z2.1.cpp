

#include <iostream>

using namespace std;

int main()
{
    int zakres, i, j;
    int suma_czesc = 0;
    int suma_calk = 0;
    
    cout << "Podaj zakres: ";
    cin >> zakres;
    for (i = 0; i <= zakres; i++) {
        for (j = 0; j < i; j++) {
            suma_czesc += j;
        }
        suma_calk += suma_czesc;
    }

    cout << suma_calk;

    return 0;
}

