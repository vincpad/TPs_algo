#include <iostream>

using namespace std;

int main()
{
    //Declarations de Variables

    int n1, n2, reste;

    //Programme
    while(1) {

    cout << "Entier 1 ?" << endl;
    cin >> n1;
    cout << "Entier 2 ?" << endl;
    cin >> n2;

    if(n1 > n2){
        reste = n1%n2;
    }
    else{
        reste = n2%n1;
    }
    if(reste == 0){
        cout << "ok";
    }
    else {
        cout << "erreur : reste =\t" << reste;
    }
    cout << endl;
    }
}

