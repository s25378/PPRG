
#include <iostream>

using namespace std;

int main()
{
    char nie_t;
    int i = 0;

    cout << "Podawaj znaki z klawiatury" << endl;

    while (i < 1) {
        cin >> nie_t;
        if (nie_t == 't') {
            cout << "Podana litera to \"t\"";
            i++;
        }
    }

    return 0;
}

