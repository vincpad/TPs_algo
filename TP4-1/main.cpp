#include <iostream>

using namespace std;

float tarifs[3][5] = {{3,4,5,6,7},{2,3,4,5,6},{1,2,3,4,5}};
//[rapide, normal, lent][-20g, -50g, -100g, -500g, -2kg]
int poids[5] = {20,50,200,500,2000};

void afficher_liste_tarifs();

int main()
{
    int p, m;
    float t;
    afficher_liste_tarifs();
    cout << endl << "Mode d'envoi (rapide : 0, normal : 1, lent : 2)? ";
    cin >> m;
    cout << "Poids ? ";
    cin >> p;
    cout << "poids : " << p << ", mode : " << m  << endl;
    for(int i=0; i<5; i++) {
        if(p<poids[i]) {
            t = tarifs[m][i];
            break;
        }
    }
    cout << endl << endl;
    cout << endl << "Poids : " << p <<"g, mode : ";
    string mode;
    switch(m){
        case 0:
            mode = "rapide";
            break;
        case 1:
            mode = "normal";
            break;
        case 2:
            mode = "lent";
            break;
        default:
            mode = "non reconnu";
    }
    cout << mode << endl;
    if(m > 2 || m < 0 || p > 2000){
        cout << "Calcul du prix impossible." << endl;
    }
    else{
        cout << "Cout de l'envoi : " << t << " euros." << endl;
    }
}

void afficher_liste_tarifs() {
    cout << "         \t\t\t" << "rapide\t" << "normal\t" << "lent" << endl;
    for(int i=0; i<5; i++) {
        cout << "Moins de " << poids[i] << "g :  \t\t ";
        cout << tarifs[0][i] << "e \t ";
        cout << tarifs[1][i] << "e \t ";
        cout << tarifs[2][i] << "e \t " << endl;
    }

}
