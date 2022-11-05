
#include <iostream>

using namespace std;

int main()
{
    float x, y;
    cout << "Podaj 2 liczby:" << endl;

    cin >> x;

    cin >> y;


    printf("Suma = %.2f", x + y);
    cout << endl;
    printf("Roznica = %.2f", x - y);
    cout << endl;
    printf("Iloczyn = %.2f", x * y);
    cout << endl;
    printf("Iloraz = %.2f", x / y);
    cout << endl;

    return 0;
}

