#include <iostream>

using namespace std;

int main()
{
    char m;
    while(m != 'o') {
        cout << "Veuillez taper o, sinon n : ";
        cin >> m;
    }
    cout << "Merci !";
}
