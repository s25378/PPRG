

#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Podaj liczbe a: ";
    cin >> a;

    cout << "Podaj liczbe b: ";
    cin >> b;

    for (int i = 1; i <= a; i++) {
        cout << "*";
    }

    cout << endl << endl;

    for (int i = 1; i <= b; i++) {
        cout << "*" << endl;
    }

    cout << endl;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == 1 || j == 1 || i == a || j == b) {
                cout << "*";
            }
            else { cout << " "; }
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a-(a-i); j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

 //   for (int i = 1; i <= a; i++) {
 //       for (int j = 1; j <= a - (a - i); j++) {
 //           if 
 //           cout << "*";
 //       }
 //       cout << endl;
 //   }

    return 0;
}

