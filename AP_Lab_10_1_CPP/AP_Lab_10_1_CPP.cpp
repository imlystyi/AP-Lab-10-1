// Якубовський Владислав, ІКНІ, РІ-11, АП, ЛР 10.1 (C++), варіант 24
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int CountGroups(string stringToCount)
{
    int count = 0;

    size_t pos = 0;

    while ((pos = stringToCount.find("abc", pos)) != -1)
    {
        pos++;
        count++;
    }    

    return count;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream file("t.txt");

    string stringToCount;

    while (getline(file, stringToCount))
        file >> stringToCount;        

    cout << "Кількість входжень: " << CountGroups(stringToCount);
}
