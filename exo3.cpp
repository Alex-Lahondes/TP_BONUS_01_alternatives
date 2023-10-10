#include <iostream>
#include <vector>
using namespace std;

int main() {
    char caractere;
    vector <char> liste{'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};

    cout << "Tapez un caractere : ";
    cin >> caractere;

    int nb = 0;

    while (nb < liste.size()) {
        if (caractere == liste[nb]) {
            cout << caractere << " est une voyelle";
            return 0;}
        nb = nb+1;
    }
    cout << caractere << " n'est pas une voyelle";
    return 1;
    }