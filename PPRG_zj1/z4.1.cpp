#include <iostream>

using namespace std;

int main()
{
    int i,j,k;
    
    cout << "Podaj 3 liczby calkowite:" << endl;
    
    cin >> i;
    cin >> j;
    cin >> k;
    
    if ( i > j && i > k ){
        cout << "i jest najwieksza";
    }
    else if ( j > k && j > i){
        cout << "j jest najwieksza";
    }
    else if ( k > j && k > i ){
        cout << "k jest najwieksza";
    }
    else {
        cout << "nie ma jednej najwiekszej liczby";
    }
    
    return 0;
}
