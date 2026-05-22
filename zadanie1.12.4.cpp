#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int main() {

    string str;
    ifstream fin("in.txt");

    fin >> str;
    int rows = stoi(str);
    fin >> str;
    int cols = stoi(str);
    int** mas = new int* [rows, cols];
    for (int i = 0; i < rows; i++) {
        mas[i] = new int[cols]();
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {

            fin >> str;
            mas[i][j] = stoi(str);
        }
    }
    fin.close();

    for (int i = 0; i < rows; i++) {
        for (int j = cols - 1; j > -1; j--) {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++) {
        delete[] mas[i];
    }

    return EXIT_SUCCESS;
}