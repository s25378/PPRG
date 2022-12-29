#include <iostream>
#include <string>

using namespace std;

string konkatencja(int n, string slowo);

int main()
{
    int n;
    string slowo;

    cout << "Podaj slowo: ";
    getline(cin, slowo);
    cout << "Podaj liczbe konkatencji slowa: "; 
    cin >> n;

   cout << konkatencja(n, slowo);

    return 0;
}

string konkatencja(int n, string slowo) {
    string pom1 = slowo;
    for (int i = 0; i < n; i++) {
        slowo = slowo + pom1;
    }
    return slowo;
}







