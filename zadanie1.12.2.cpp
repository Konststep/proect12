#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include <fstream>

using namespace std;

int main() {
   
    string str;
    ifstream fin("C:\\in.txt");

    fin >> str;
    int size = stoi(str);
    int* mas = new int[size];
    
    for (int i = 0; i < size; i++) {
        fin >> str;
        mas[i] = stoi(str);

    }
    fin.close();
    int a = size;

    for (int i = 0; i < size / 2; i++) {
        a--;
        swap(mas[i], mas[a]);
    }

    for (int i = 0; i < size; i++) {

        cout << mas[i] << " ";
    }
    delete mas;
    
    return EXIT_SUCCESS;
}