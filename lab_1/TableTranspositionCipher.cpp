#include "TableTranspositionCipher.h"
#include <vector>
using namespace std;
TableTranspositionCipher::TableTranspositionCipher(int kol_stolb) : kol_stolb(kol_stolb) {}
string TableTranspositionCipher::encrypt(const string& d_text) {
    string text;
    int kol_strok = (d_text.length() + kol_stolb - 1) / kol_stolb;
    vector<string> matriza(kol_strok, string(kol_stolb, ' '));
    int poz = 0;
    for (int tek_stroka = 0; tek_stroka < kol_strok; tek_stroka++) {
        for (int tek_stolb = 0; tek_stolb < kol_stolb; tek_stolb++) {
            if (poz < d_text.length()) {
                matriza[tek_stroka][tek_stolb] = d_text[poz++];
            }
        }           
    }
    for (int tek_stolb = 0; tek_stolb < kol_stolb; tek_stolb++) {
        for (int tek_stroka = 0; tek_stroka < kol_strok; tek_stroka++) {
            text += matriza[tek_stroka][tek_stolb];
        }
    }
    return text;
}
string TableTranspositionCipher::decrypt(const string& d_text) {
    string text;
    int kol_strok = (d_text.length() + kol_stolb - 1) / kol_stolb;
    vector<string> matriza(kol_strok, string(kol_stolb, ' '));
    int poz = 0;
    for (int tek_stolb = 0; tek_stolb < kol_stolb; tek_stolb++) {
        for (int tek_stroka = 0; tek_stroka < kol_strok; tek_stroka++) {
            if (poz < d_text.length()) {
                matriza[tek_stroka][tek_stolb] = d_text[poz++];
            }
        }
    }
    for (int tek_stroka = 0; tek_stroka < kol_strok; tek_stroka++) {
        for (int tek_stolb = 0; tek_stolb < kol_stolb; tek_stolb++) {
            text += matriza[tek_stroka][tek_stolb];
        }
    }
    return text;
}
