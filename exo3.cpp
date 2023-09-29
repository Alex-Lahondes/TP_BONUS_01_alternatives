#include <iostream>
using namespace std;

int main() {
    char caractere;

    cout << "Tapez un caractere : ";
    cin >> caractere;
    if (caractere == 'a' or 'e' or 'i' or 'o' or 'u' or 'y' or 'A' or 'E' or 'I' or 'O' or 'U' or 'Y') {
        cout << caractere << " est une voyelle";
        return 0;}
    else {
        cout << caractere << " n'est pas une voyelle";
        return 1;
    }
}