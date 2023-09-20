#include <iostream>
using namespace std;

int main() {
    int nbEntier;
    cout << "Saisisez un entier :";
    cin >> nbEntier;

    if (nbEntier%2==0) {
        cout << "Le nombre " << nbEntier << " est paire";
        return 1;
    }
    else {
        cout << "Le nombre " << nbEntier << " est impaire";
        return 2;
    }
    return 0;
}