#include <iostream>
#include "TableTranspositionCipher.h"
using namespace std;
int main()
{
    string d_text;
    int key;
    unsigned operation;
    cout << "Введите количество столбцов: ";
    cin >> key;
    cin.ignore();
    TableTranspositionCipher cipher(key);
    do {
        cout<<"Введите операцию (0-выход, 1-зашифровка, 2-расшифровка): ";
        cin>>operation;
        if (operation > 2) {
            cout<<"Недопустимая операция\n";
        } else if (operation >0) {
            cout << "Введите текст: ";
            cin.ignore();
            getline(cin, d_text);
            if (operation==1) {
                string encryptedText = cipher.encrypt(d_text);
                cout << "Зашифрованный текст: " << encryptedText << endl;
            } else {
                string decryptedText = cipher.decrypt(d_text);
                cout << "Расшифрованный текст: " << decryptedText << endl;
            }
        }
    } while (operation!=0);
    return 0;
}
