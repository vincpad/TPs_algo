#include <iostream>

using namespace std;

bool valeurPresente(int T[], int n, int v);

int main()
{
    const int taille = 20; // taille du tableau
    int tableau[taille] = {71,47,45,28,23,65,67,68,8,100,96,34,17,55,5,15,32,98,52,62};

    cout << valeurPresente(tableau, taille, 45) << endl << valeurPresente(tableau, taille, 22);

    return 0;
}

bool valeurPresente(int T[], int n, int v) {
    bool r = false;
    for(int i=0; i<n; i++){
        if(T[i]==v) r=true;
    }
    return r;
}
