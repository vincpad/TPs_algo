#include <iostream>

using namespace std;

int main()
{
    int tableau[5] = {12,-1,10,8,4};

    int taille_tab = sizeof(tableau)/sizeof(int);
    int compteur = 0;
    float somme = 0;

    for(int i=0; i<taille_tab; i++) {
        if(tableau[i] != -1){
            somme = somme + tableau[i];
            compteur++;
        }
    }
    cout << "Moyenne : " << somme/compteur;
    return 0;
}
