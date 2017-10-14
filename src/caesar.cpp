#include <iostream>
#include <cassert>
#include <cstring>
#include <cctype>

#include "caesar.h"

void chiper(char *pPlainText, const int &rSize, char *pChiperText, const int &rKey)
{
    assert(pPlainText != nullptr);
    assert(pChiperText != nullptr);
    assert(rSize >= 1);
    assert(rKey > 0 && rKey <= 25);

    const int alphabetLength = 26;

    for (int i = 0; i < rSize; i++)
    {
        char ch = pPlainText[i];
        if (isupper(ch))
        {
            pChiperText[i] = (char)(ch - 'A' + rKey) % alphabetLength + 'A';
            continue;
        }

        if (islower(ch))
        {
            pChiperText[i] = (char)(ch - 'a' + rKey) % alphabetLength + 'a';
            continue;
        }

        pChiperText[i] = pPlainText[i];
    }
}

void dechiper(char *pChiperText, const int &rSize, char *pHypothetiquePlainText, const int &rKey)
{
    assert(pChiperText != nullptr);
    assert(pHypothetiquePlainText != nullptr);
    assert(rSize >= 1);
    assert(rKey >= 0 && rKey <= 25);

    const int alphabetLength = 26;

    for (int i = 0; i < rSize; i++)
    {
        char ch = pChiperText[i];
        if (isupper(ch))
        {
            pHypothetiquePlainText[i] = (char)(ch - 'A' - rKey) % alphabetLength + 'A';
            continue;
        }

        if (islower(ch))
        {
            pHypothetiquePlainText[i] = (char)(ch - 'a' - rKey) % alphabetLength + 'a';
            continue;
        }

        pHypothetiquePlainText[i] = pChiperText[i];
    }
}

int check(char *pPlainText, char *pHypothetiquePlainText)
{
    if (!strncmp(pPlainText, pHypothetiquePlainText, strlen(pPlainText) + 1))
    {
        return 0;
    }
    return -1;
}

int bruteforce(char *pChiperText, const int &rSize, char *pHypothetiquePlainText, char *pPlainText)
{
    assert(pChiperText != nullptr);
    assert(pHypothetiquePlainText != nullptr);
    assert(rSize >= 1);
    int key = 0;

    while (key <= rSize)
    {
        char *pTemp = new char[rSize];
        for (int i = 0; i < rSize; i++)
        {
            if (isupper(pChiperText[i]))
            {
                pTemp[i] = toupper(pChiperText[i] - key);
            }
            else
            {
                pTemp[i] = toupper(pChiperText[i] - key);
            }
        }
        if (!check(pPlainText, pTemp))
        {
            strncpy(pHypothetiquePlainText, pPlainText, rSize);
            return 0;
        }
        delete[] pTemp;
        key++;
    }
    return 1;
}