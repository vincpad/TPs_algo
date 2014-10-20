#include <iostream>

using namespace std;

int main()
{
    int tmp, compteur = 0;
    int tab[20];
    bool symetrique = true;
    cout << "Entrer les entiers, -1 pour terminer" << endl;
    while(tmp != -1){
        cin >> tmp;
        tab[compteur] = tmp;
        compteur++;
    }
    compteur--;
    cout << "nb d'entiers lus = " << compteur << endl;
    for(int i=0; i<compteur/2; i++){
        if(tab[i] != tab[compteur-1-i]){
            symetrique = false;
        }
    }
    if(symetrique == true) cout << "le tableau est symetrique";
    else cout << "le tableau n'est pas symetrique";
}
