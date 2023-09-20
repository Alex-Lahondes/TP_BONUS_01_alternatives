#include "iostream"
using namespace std;

int main() {

    int annee;

    cout << "Quelle annee ?" << endl;
    cin >> annee;

    if (annee%4==0) {
        if (annee%100!=0) {
            cout << annee << " est bissextile";
        }

    }

    else {
        cout << annee << " n'est pas bissextile";
    }

    return 0;

}