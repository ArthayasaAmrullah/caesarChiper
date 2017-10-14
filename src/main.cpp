#include <iostream>
using namespace std;

#include "caesar.h"
#include "util.h"

int main()
{
    int size = 1024;
    char *pPlainText = new char[size];
    char *pChiperText = new char[size];
    char *pHypothetiquePlainText = new char[size];

    const int key = 3;

    writeToCString(pPlainText, size);
    chiper(pPlainText, size, pChiperText, key);
    printCString(pChiperText, size);

    dechiper(pChiperText, size, pHypothetiquePlainText, key);
    if (!check(pPlainText, pHypothetiquePlainText))
    {
        std::cout << "\nDechipering succeed!\n";
        printCString(pHypothetiquePlainText, size);
    }
    else
    {
        std::cout << "Dechipering failed!\n";
    }

    // if (!bruteforce(pChiperText, size, pHypothetiquePlainText, pPlainText))
    // {
    //     std::cout << "hacked!\n";
    //     std::cout << pHypothetiquePlainText << "\n";
    // }
    // else
    // {
    //     std::cout << "Can't hack!\n";
    // }

    delete[] pPlainText;
    delete[] pChiperText;
    delete[] pHypothetiquePlainText;

    return 0;
}