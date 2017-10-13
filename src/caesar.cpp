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

    for (int i = 0; i < rSize; i++)
    {
        if (isupper(pPlainText[i]))
        {
            pChiperText[i] = toupper(pPlainText[i] + rKey);
        }
        else
        {
            pChiperText[i] = pPlainText[i] + rKey;
        }
    }
}

void dechiper(char *pChiperText, const int &rSize, char *pHypothetiquePlainText, const int &rKey)
{
    assert(pChiperText != nullptr);
    assert(pHypothetiquePlainText != nullptr);
    assert(rSize >= 1);
    assert(rKey > 0 && rKey <= 25);

    for (int i = 0; i < rSize; i++)
    {
        pHypothetiquePlainText[i] = pChiperText[i] - rKey;
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