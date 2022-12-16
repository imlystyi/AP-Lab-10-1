// AP_Lab_10_1_C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int CountGroups(char* stringToCount, int ii = 0)
{
    if (strlen(stringToCount) < 3)
        return 0;

    if (stringToCount[ii + 2] != 0)
    {
        if (stringToCount[ii] == 'a' && stringToCount[ii + 1] == 'b' && stringToCount[ii + 2] == 'c')
            return 1 + CountGroups(stringToCount, ++ii);

        else return CountGroups(stringToCount, ++ii);
    }

    else return 0;
}

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
