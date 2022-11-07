#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	int tablica[10][10];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == 0) {
				tablica[i][j] = j;
			}
			else if (i == 1) {
				tablica[i][j] = j * 2;
			}
			else if (i == 2) {
				tablica[i][j] = j * j;
			}
			else if (i == 3) {
				tablica[i][j] = i + j +2;
			}
			else if (i == 4) {
				tablica[i][j] = (j + 1) - (i + 1);
			}
			else {
				tablica[i][j] = 0;
			}

		}
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << setw(2);
			cout << tablica[j][i] << " ";
		}
		cout << endl;
	}

	
	


	return 0;
}