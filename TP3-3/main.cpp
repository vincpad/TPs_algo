#include <iostream>

using namespace std;

int main()
{
    int tableau[5] = {12,-1,10,8,4};

    int taille_tab = sizeof(tableau)/sizeof(int);
    int compteur = 0;
    float somme = 0, noteMax = 0, noteMin = 20;

    for(int i=0; i<taille_tab; i++) {
        if(tableau[i] != -1){
            if(tableau[i] > noteMax) noteMax = tableau[i];
            if(tableau[i] < noteMin) noteMin = tableau[i];
            somme = somme + tableau[i];
            compteur++;
        }
    }
    cout << "- note la plus haute : " << noteMax << endl << "- note la plus basse : " << noteMin << endl;
    cout << "- moyenne : " << somme/compteur;
    return 0;
}
