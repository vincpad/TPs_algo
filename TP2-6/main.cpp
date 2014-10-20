#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    int amorce;
    int n;
    int compteur = 1;
    amorce=time(NULL);
    srand(amorce);

    n = rand() % 10000 + 1;

    while(compteur <= 12){
        int nbr;
        cout << "(Cheat : nombre : " << n << ")" << endl;
        cout << "Proposition ? ";
        cin >> nbr;
        if(nbr < n) {
            cout << "C'est plus !" << endl;
        }
        else if(nbr > n) {
            cout << "C'est moins !" << endl;
        }
        else {
            cout << endl << "Gagne !";
            break;
        }
        compteur++;
    }

    return 0;
}
