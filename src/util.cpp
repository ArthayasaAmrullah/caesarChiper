#include <iostream>
#include <cassert>
#include <cstring>

void printCString(const char *pA, const int &rSize)
{
    assert(pA != nullptr);
    assert(rSize >= 0);

    for (int i = 0; i < rSize; i++)
    {
        std::cout << pA[i];
    }
    std::cout << std::endl;
}

void writeToCString(char *pA, const int &rSize)
{
    assert(pA != nullptr);
    assert(rSize >= 0);

    const int size = 4068;
    char *pTemp = new char[size];
    std::cin >> pTemp;
    strncpy(pA, pTemp, rSize - 1);
    delete[] pTemp;
}