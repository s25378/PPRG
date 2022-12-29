#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string name;
    string surname;
    int index_num;
};

int main()
{
    Student pomoc = { "pomoc", "pomoc", 1 };

    int ilosc;

    cout << "Podaj ilu chcesz dodac studentow: ";
    cin >> ilosc;

    vector<Student> stud; /*= { { "Marek", "Walkowski", 1233},
                             { "Warek", "Malkowski", 7983},
                             { "John", "Wick", 8127},
                             { "Keanu", "Reeves", 1111} };
                             */

    cout << "Podaj dane studentow: " << endl;

    for (int i = 0; i < ilosc; i++) {
        stud.push_back(Student());
        cout << "student nr." << i + 1 << endl;
        cout << "Imie: ";
        cin >> stud[i].name;
        cout << "Nazwisko: ";
        cin >> stud[i].surname;
        cout << "Numer indeksu: ";
        cin >> stud[i].index_num;
        cout << endl;
    }
    


    cout << "Vector nieposortowany: " << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Student " << i << ": " << stud[i - 1].name << " " << stud[i - 1].surname << " " << stud[i - 1].index_num << endl;
    }

    cout << endl << stud.size();

    for (int i = 0; i < stud.size(); i++) {
        for (int j = i+1; j < stud.size(); j++) {
            if (stud[j].index_num < stud[i].index_num) {
                pomoc = stud[i];
                stud[i] = stud[j];
                stud[j] = pomoc;
            }
        }
    }

    cout << "Vector posortowany: " << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Student " << i << ": " << stud[i - 1].name << " " << stud[i - 1].surname << " " << stud[i - 1].index_num << endl;
    }

    return 0;
}







