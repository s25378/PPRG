#include <iostream>



using namespace std;

struct student {
    string imie;
    int inf, mat, chem, pol;
};

int main()
{
    struct student list_of_stud[6];
    int l_zapytan;

    for (int i = 1; i < 7; i++) {
        cout << "Podaj imie " << i << " studenta: ";
        cin >> list_of_stud[i - 1].imie;
        cout << "Podaje ocene z informatyki: ";
        cin >> list_of_stud[i - 1].inf;
        cout << "Podaje ocene z matematyki: ";
        cin >> list_of_stud[i - 1].mat;
        cout << "Podaje ocene z chemii: ";
        cin >> list_of_stud[i - 1].chem;
        cout << "Podaje ocene z jezyka polskiego: ";
        cin >> list_of_stud[i - 1].pol;
        cout << endl;
    }

    cout << "Podaj liczbe zapytan: ";
    cin >> l_zapytan;

    for (int i = 0; i < l_zapytan; i++) {
        int pom1,pom2;
        cout << "Podaj numer ucznia (od 1 do 6): ";
        cin >> pom1;
        cout << "Podaj numer przedmiotu (od 1 do 4): ";
        cin >> pom2;

        switch (pom2) {
        case 1:
            cout << "Uczen: " << list_of_stud[pom1 - 1].imie << ". Ocena z przedmiotu informatyka: " << list_of_stud[pom1 - 1].inf << endl;
            break;
        case 2:
            cout << "Uczen: " << list_of_stud[pom1 - 1].imie << ". Ocena z przedmiotu matematyka: " << list_of_stud[pom1 - 1].mat << endl;
            break;
        case 3:
            cout << "Uczen: " << list_of_stud[pom1 - 1].imie << ". Ocena z przedmiotu chemia: " << list_of_stud[pom1 - 1].chem << endl;
            break;
        case 4:
            cout << "Uczen: " << list_of_stud[pom1 - 1].imie << ". Ocena z przedmiotu jezyk polski: " << list_of_stud[pom1 - 1].pol << endl;
            break;
        }


    }
    
     

    return 0;
}
