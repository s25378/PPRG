#include <iostream>
#include <ostream>
#include <vector>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::vector;

int getNumber();
vector<vector<int>> getMatrix();
void add(vector<vector<int>> matrix1, vector<vector<int>> matrix2);
void substract(vector<vector<int>> matrix1, vector<vector<int>> matrix2);
void multiply(vector<vector<int>> matrix1, vector<vector<int>> matrix2);
void transposition(vector<vector<int>> matrix1);

int width[2], height[2];
int liczba = 0;

int main() {
    int operation;


    operation = getNumber();

    if (operation == 1 || operation == 2 || operation == 3) {
        cout << "Wybrano operacje na 2 macierzach" << endl;
    }
    else if (operation == 4) {
        cout << "Wybrano operacje na 1 macierzy" << endl;
    }
    else {
        cout << "ERR";
        return 1;
    }

    vector<vector<int>> matrix1 = getMatrix();

    //dzialania na macierzach
    switch (operation) {
    case 1: {
        cout << "Podaj dane do drugiej macierzy" << endl;
        vector<vector<int>> matrix2 = getMatrix();
        add(matrix1, matrix2);
        break;
    }
    case 2: {
        cout << "Podaj dane do drugiej macierzy" << endl;
        vector<vector<int>> matrix2 = getMatrix();
        substract(matrix1, matrix2);
        break;
    }
    case 3: {
        cout << "Podaj dane do drugiej macierzy" << endl;
        vector<vector<int>> matrix2 = getMatrix();
        cout << "Mnozenie macierzy A*B" << endl;
        multiply(matrix1, matrix2);
        break;
    }
    case 4: {
        transposition(matrix1);
        break;
    }
    }

    return 0;
}

int getNumber() {
    int operation;
    cout << "Wybierz jedno z ponizszych dzialan na macierzach" << endl;
    cout << "1.Dodawanie macierzy" << endl;
    cout << "2.Odejmowanie macierzy." << endl;
    cout << "3.Mnozenie macierzy" << endl;
    cout << "4.Transpozycja macierzy" << endl;
    cin >> operation;
    return operation;
}

vector<vector<int>> getMatrix() {
    int  i, j;
    cout << "Podaj liczbe wierszy macierzy: ";
    cin >> height[liczba];
    cout << "Podaj liczbe kolumn macierzy: ";
    cin >> width[liczba];
    
    //tworzenie macierzy do ktorej zostana zapisane dane od uzytkownika
    vector<vector<int>> matrix(height[liczba], vector<int>(width[liczba]));


    for (i = 0; i < height[liczba]; i++) {
        for (j = 0; j < width[liczba]; j++) {
            matrix[i][j] = 0;
        }
    }

    cout << "Kolejne elementy macierzy w wierszu oddziel spacja." << endl;
    cout << "Aby zapisac liczby w kolejnym wierszu nacisnij enter." << endl;
    cout << "Podaj liczby do zapisania w macierzy: " << endl;

    //zapisywanie liczb do macierzy
    for (auto& row : matrix) {
        for (auto& a : row) {
            cin >> a;
        }
    }

    cout << endl;

    liczba++;
    return matrix;
}

void add(vector<vector<int>> matrix1, vector<vector<int>> matrix2) {
    int i;
    int j;

    if (width[0] != width[1] && height[0] != height[1]) {
        cout << "ERR";
        return;
    }
    else {

        //tworzenie pustej macierzy wynikowej
        vector<vector<int>> matrixSummed(height[0], vector<int>(width[0]));


        //wypelnianie macierzy wynikowej wynikami dodawania
        for (i = 0; i < height[0]; i++) {
            for (j = 0; j < width[0]; j++) {
                matrixSummed[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        //drukowanie macierzy wynikowej z dodawania
        cout << "Suma macierzy:" << endl;
        for (i = 0; i < height[0]; i++) {
            for (j = 0; j < width[0]; j++) {
                cout << matrixSummed[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void substract(vector<vector<int>> matrix1, vector<vector<int>> matrix2) {
    int i;
    int j;

    if (width[0] != width[1] && height[0] != height[1]) {
        cout << "ERR";
        return;
    }
    else {
        //tworzenie pustej macierzy wynikowej
        vector<vector<int>> matrixSubstracted(height[0], vector<int>(width[0]));

        cout << "Ilosc wierszy obydwu macierzy bedacych wynikiem to: " << height[0] << endl;
        cout << "Ilosc kolumn obydwu macierzy bedacych wynikiem to: " << height[0] << endl;


        //wypelnianie macierzy wynikowej wynikami odejmowania
        for (i = 0; i < height[0]; i++) {
            for (j = 0; j < width[0]; j++) {
                matrixSubstracted[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

        //drukowanie macierzy wnikowej z odejmowania
        cout << "Roznica macierzy:" << endl;
        for (i = 0; i < height[0]; i++) {
            for (j = 0; j < width[0]; j++) {
                cout << matrixSubstracted[i][j] << " ";
            }
            cout << endl;
        }
    }

}

void multiply(vector<vector<int>> matrix1, vector<vector<int>> matrix2) {
    int i;
    int j;
    int k;
    int pomoc = 0;

    if (width[0] != height[1]) {
        cout << "ERR";
        return;
    }
    else {

        //tworzenie pustej macierzy wynikowej
        vector<vector<int>> matrixMultiplied(height[0], vector<int>(width[1]));

        //obliczanie macierzy wynikowej
        for (i = 0; i < height[0]; i++) {
            for (j = 0; j < width[1]; j++) {
                for (k = 0; k < width[1]; k++) {
                    pomoc = pomoc + (matrix1[i][k] * matrix2[k][j]);
                }
                matrixMultiplied[i][j] = pomoc;
                pomoc = 0;
            }
        }

        cout << "Ilosc wierszy macierzy z wyniku: " << height[0] << endl;
        cout << "Ilosc kolumn macierzy z wyniku: " << width[1] << endl;
        cout << "Macierz A*B:" << endl;

        //drukowanie macierzy wynikowej
        for (i = 0; i < height[0]; i++) {
            for (j = 0; j < width[1]; j++) {
                cout << matrixMultiplied[i][j] << " ";
            }
            cout << endl;
        }
    }

}

void transposition(vector<vector<int>> matrix1) {
    int i, j;
    //tablica do zapisania wyniku
    vector<vector<int>> matrixTransposed(width[0], vector<int>(height[0]));

    //obliczanie macierzy wynikowej
    for (i = 0; i < height[0]; i++) {
        for (j = 0; j < width[0]; j++) {
            matrixTransposed[j][i] = matrix1[i][j];
        }
    }

    cout << "Ilosc wierszy macierzy z wyniku: " << width[0] << endl;
    cout << "Ilosc kolumn macierzy z wyniku: " << height[0] << endl;

    //drukowanie macierzy wynikowej
    for (i = 0; i < width[0]; i++) {
        for (j = 0; j < height[0]; j++) {
            cout << matrixTransposed[i][j] << " ";
        }
        cout << endl;
    }

}


