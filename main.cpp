#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    //numarul de niveluri ale arborelui
    int n;
    cin >> n;

    //secventa de miscari - stanga sau dreapta
    string path;
    cin >> path;

    //calculam valoarea maxima a pozitiei finale posibile pe baza numarului de niveluri
    int maxi = pow(2, n + 1); //numărul total de noduri disponibile în arborele binar

    int pos = 1;

    for (int i = 0; i < path.length(); ++i) {
        pos *= 2; //se deplasează la următorul nod din arbore, care este situat la o distanță dublă față de nodul anterior pe același nivel.
        // daca miscarea este 'R', adaugam 1 la pozitie
        if (path[i] == 'R') {
            pos++;
        }
    }

    cout << maxi - pos << endl;
}
