void chiper(char *pPlainText, const int &rSize, char *pChiperText, const int &rKey);
void dechiper(char *pChiperText, const int &rSize, char *pHypothetiquePlainText, const int &rKey);
int check(char *pPlainText, char *pHypothetiquePlainText);
int bruteforce(char *pChiperText, const int &rSize, char *pHypothetiquePlainText, char *pPlainText);