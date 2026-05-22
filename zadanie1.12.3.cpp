#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int size = 0;
    ofstream fout("out.txt");
    cout << "Введите размер массива: ";
    cin >> size;
    fout << size << endl;

    int* mas = new int[size]();
    for (int i = 0; i < size; i++) {
        cout << "MAS[" << i << "] = ";
        cin >> mas[i];
    }

    for (int i = size - 1; i > -1; i--) {
        fout << mas[i] << " ";
    }
    fout.close();
    delete mas;
    return EXIT_SUCCESS;
}