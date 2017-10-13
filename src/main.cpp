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

    writeToArray(pPlainText, size);
    chiper(pPlainText, size, pChiperText, key);
    printArray(pChiperText, size);
    dechiper(pChiperText, size, pHypothetiquePlainText, key);
    printArray(pHypothetiquePlainText, size);
    if (!check(pPlainText, pHypothetiquePlainText))
    {
        std::cout << "Dechipering is correct!\n";
    }
    delete[] pPlainText;
    delete[] pChiperText;
    delete[] pHypothetiquePlainText;
    return 0;
}