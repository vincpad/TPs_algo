#include <iostream>

using namespace std;

void afficher_tableau(int tab[], int taille);

int main()
{
    int tableau[4] = {1,2,3,4};


    int taille_tab = sizeof(tableau)/sizeof(int);
    afficher_tableau(tableau, taille_tab);
    for(int i=0; i<taille_tab/2; i++) {
        int tmp = tableau[i];
        tableau[i] = tableau[taille_tab-1-i];
        tableau[taille_tab-1-i] = tmp;
    }
    afficher_tableau(tableau, taille_tab);
}

void afficher_tableau(int tab[], int taille) {
    for(int i=0; i<taille; i++) {
        cout << tab[i] << " | ";
    }
    cout << endl;
}
