#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s=0;

    cout << "Nombre entier : ";
    cin >> n;

    for(int i=1; i<=n; i++){
        s=s+pow(i,2);
    }
    cout << "Somme finale : " << s;
}
