
#include <iostream>
#include <cmath>

using namespace std;

void print_function(float a, float b, float c);
void roots(float a, float b, float c);

int main()
{
    float a, b, c;

    cout << "Rownanie ma postac ogolna. Wyglada to tak: " << endl;
    cout << "y = a * x^2 + b * x + c" << endl;
    cout << "Podaj zmienne a, b oraz c" << endl;

    cout << "Podaj zmienna a: ";
    cin >> a;
    cout << "Podaj zmienna b: ";
    cin >> b;
    cout << "Podaj zmienna c: ";
    cin >> c;

    cout << "Uwzgledniajac zmienne funkcja wyglada tak: " << endl;

    print_function(a, b, c);

    roots(a,b,c);

    return 0;
}

void print_function(float a, float b, float c) {
    if (a != 0) {
        cout << "y = " << a << " * x^2";
    }
    if (b < 0) {

        cout << " - " << b * (-1);
        if (c < 0) {
            cout << " * x - " << c * (-1);
        }
        else if (c > 0) {
            cout << " * x + " << c;
        }
    }
    else if (b == 0) {
        if (c < 0) {
            cout << " * x - " << c * (-1);
        }
        else if (c > 0) {
            cout << " * x + " << c;
        }
    }
    else {
        cout << " + " << b;
        if (c < 0) {
            cout << " * x - " << c * (-1);
        }
        else if (c > 0) {
            cout << " * x + " << c;
        }
    }
}

void roots(float a, float b, float c) {
    float delta;

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        cout << endl << "Delta mniejsza od zera, brak pierwiastkow funkcji";
    }
    else if ( delta == 0 ){
        cout << endl << "Funkcja ma 1 pierwiastek: ";
        cout << (-1 * b) / (2 * a);
    }
    else {
        cout << endl << "Funkcja ma 2 pierwiastki: " << endl;
        cout << "x1 = " << (-1 * b) - sqrt(delta) / (2 * a) << endl;
        cout << "x1 = " << (-1 * b) + sqrt(delta) / (2 * a);
    }
}