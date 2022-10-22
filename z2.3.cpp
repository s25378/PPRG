

#include <iostream>

using namespace std;

int main()
{
    int miesiac;

    cout << "Podaj numer miesiaca: ";
    cin >> miesiac;

    switch(miesiac){
    case 1:
        cout << "styczen" << endl;
        cout << "Podany miesiac ma 31 dni" << endl;
        cout << "W tym miesiacu jest pochmurnie";
        break;
    case 2:
        cout << "luty" << endl;
        cout << "Podany miesiac ma 28 dni" << endl;
        cout << "W tym miesiacu jest pochmurnie";
        break;
    case 3:
        cout << "marzec" << endl;
        cout << "Podany miesiac ma 31` dni" << endl;
        cout << "W tym miesiacu jest pochmurnie";
        break;
    case 4:
        cout << "kwiecien" << endl;
        cout << "Podany miesiac ma 30 dni" << endl;
        cout << "W tym miesiacu jest slonecznie";
        break;
    case 5:
        cout << "maj" << endl;
        cout << "Podany miesiac ma 31 dni" << endl;
        cout << "W tym miesiacu jest slonecznie";
        break;
    case 6:
        cout << "czerwiec" << endl;
        cout << "Podany miesiac ma 30 dni" << endl;
        cout << "W tym miesiacu jest slonecznie";
        break;
    case 7:
        cout << "lipiec" << endl;
        cout << "Podany miesiac ma 31 dni" << endl;
        cout << "W tym miesiacu jest slonecznie";
        break;
    case 8:
        cout << "sierpien" << endl;
        cout << "Podany miesiac ma 31 dni" << endl;
        cout << "W tym miesiacu jest slonecznie";
        break;
    case 9:
        cout << "wrzesien" << endl;
        cout << "Podany miesiac ma 30 dni" << endl;
        cout << "W tym miesiacu jest pochmurnie";
        break;
    case 10:
        cout << "pazdziernik" << endl;
        cout << "Podany miesiac ma 31 dni" << endl;
        cout << "W tym miesiacu jest pochmurnie";
        break;
    case 11:
        cout << "listopad" << endl;
        cout << "Podany miesiac ma 30 dni" << endl;
        cout << "W tym miesiacu jest pochmurnie";
        break;
    case 12:
        cout << "grudzien" << endl;
        cout << "Podany miesiac ma 31 dni" << endl;
        cout << "W tym miesiacu jest pochmurnie";
        break;
    default:
        cout << "Nie ma takiego miesiaca";
    }




    return 0;
}

