#include <iostream>



using namespace std;

int podzielna(int n);

int main()
{
    int n;
    cout << "Podaj zakres do ktorego obliczyc liczby podzielne przez 3 ale nie przez 5: ";
    cin >> n;
    cout << "Ilosc liczb to: " << podzielna(n);
    return 0;
}

int podzielna(int n) {
    int ilosc_liczb = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 5 == 0 && i % 3 != 0) {
            ilosc_liczb++;
        }
    }
    return ilosc_liczb;
}



