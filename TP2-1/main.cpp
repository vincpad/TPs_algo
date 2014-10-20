#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int q, u, nbre;
    cout << "Premier terme : ";
    cin >> u;
    cout << "Raison : ";
    cin >> q;
    cout << "Nombre de termes : ";
    cin >> nbre;


    for(int i=0; i<nbre; i++) {
        cout << "Terme " <<  i+1 << " : " << u*pow(q,i) << endl;
    }
}
