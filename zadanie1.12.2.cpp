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
    
    for (int i = size-1; i > -1; i--) {

        cout << mas[i] << " ";
    }
    delete mas;
    
    return EXIT_SUCCESS;
}
