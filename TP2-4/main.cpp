#include <iostream>

using namespace std;

int main()
{
    char m;
    int i=1;

    while(m != 'o') {
        cout << "Veuillez taper o, sinon n : ";
        cin >> m;

        if(i==5){
                cout << "Echec" << endl;
                return 0;
        }
        i++;
    }

    cout << "Merci !!" << endl;
}
