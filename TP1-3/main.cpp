#include <iostream>

using namespace std;

/*Déclarations des Variables*/

string nom;
double pu;
int nbre;
const double TVA = 0.196;

/* Programme Principal*/

int main()
{
    //Valeurs Récupérées

    cout << "Quel est le nom du client ?" << endl;
    cin >> nom ;
    cout << "Quel est le nombre d'articles ?" << endl;
    cin >> nbre;
    cout << "Quel est le prix unitaire ?" << endl;
    cin >> pu;

    //Valeur Retournées

    cout << "Client\t" << nom << endl;
    cout << endl;
    cout << "Nombre d'articles\t" << nbre << endl;
    cout << endl;
    cout << "Prix Unitaire\t" << pu << endl;
    cout << endl;
    cout << "Prix Total Hors Taxe\t" << nbre*pu << endl;
    cout << endl;
    cout << "TVA\t" << TVA*nbre*pu << endl;
    cout << endl;
    cout << "Prix TTC\t" << (TVA+1)*nbre*pu;
    cout << endl;


    return 0;
}
