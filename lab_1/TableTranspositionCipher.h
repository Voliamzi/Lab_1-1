#ifndef TABLETRANSPOSITIONCIPHER_H
#define TABLETRANSPOSITIONCIPHER_H
#include <string>
using namespace std;
class TableTranspositionCipher {
public:
    TableTranspositionCipher(int kol_stolb);
    string encrypt(const string& d_text);
    string decrypt(const string& d_text);
private:
    int kol_stolb;
};
#endif
