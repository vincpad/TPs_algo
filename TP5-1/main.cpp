#include <iostream>

using namespace std;

int factoriel(int n);
float binomial(int p, int n);

int main()
{
    cout << "n! = " << factoriel(3) << endl;
    cout << "C(6,8) = " << binomial(6,8) << endl;
    return 0;
}

int factoriel(int n){
    int r=1;
    for(int i=1; i<=n; i++){
        r=r*i;
    }
    return r;
}

float binomial(int p, int n){
    float r;
    r = float(factoriel(n))/(float(factoriel(p))*float(factoriel(n-p)));
    return r;
}
