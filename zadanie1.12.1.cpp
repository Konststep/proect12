﻿#include <iostream>
#include <clocale>
#include <string>
#include <Windows.h>
#include < fstream >

using namespace std;

int main() {
    //setlocale(LC_ALL, "RUS");
    //SetConsoleCP(1251);
    //SetConsoleOutputCP(1251);
    setlocale(LC_CTYPE, "ru_RU.UTF-8");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string str;
    ifstream fin("C:\\in.txt");

    while (!fin.eof())
    {
        fin >> str;
        cout << str << endl;
    }
    fin.close();

    return EXIT_SUCCESS;
}
