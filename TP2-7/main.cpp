#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int n2;

    int r=0;
    int tmp;
    int tmp2;
    int puissanceDebut;
    int puissanceFin;

    int pow_int(int nbr, int power);

    cout << "Entier à retourner : ";
    //cin >> n;
    n=12345;
    for(int i=0; i<=4; i++) {
        puissanceDebut = pow_int(10, 4-i);
        puissanceFin = pow_int(10, i);


        cout << n << " / " << puissanceDebut << " = ";

        tmp = n / puissanceDebut;

        cout << tmp << endl;


        tmp2 = tmp*puissanceDebut;
        cout << n << " - " << tmp2 << " = ";

        n = n - tmp2;

        cout << n << endl;

        r = r + tmp*puissanceFin;
    }
    cout << r;
}

int pow_int(int nbr, int power) {
    int r=nbr;
    for(int i=1; i<power; i++){
        r=r*nbr;
    }
    if(power == 0) {
        r = 1;
    }
    return r;
}
