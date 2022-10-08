#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    cout << "Podaj liczbe calkowita: ";
    cin >> i;
    
    if ( i == 0 ){
        cout << "liczba jest zadna";
    }
    else if ( i%2==0 ){
        cout << "liczba jest parzysta";
    }
    else {
        cout << "liczba jest nieparzysta";
    }

    return 0;
}
