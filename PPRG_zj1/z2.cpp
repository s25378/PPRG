#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    cout << "Podaj liczbe calkowita: ";
    cin >> i;
    
    if ( i == 0 ){
        cout << "liczba jest rowna 0";
    }
    else if ( i < 0 ){
        cout << "liczba jest ujemna";
    }
    else {
        cout << "liczba jest dodatnia";
    }

    return 0;
}
