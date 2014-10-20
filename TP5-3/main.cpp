#include <iostream>

using namespace std;

int nbOccurences(char T[], int tailleTableau, char c);

int main()
{
    char T[] = {'a','f','h','j','b','v','c','d','t','y','h','j','i','k','l','o','p',
            'm','d','f','f','g','h','h','b','v','c','f','e','r','t','g','h','y','u'};

    char caract = 'f';

    cout << caract << " apparait " << nbOccurences(T, sizeof(T)/sizeof(char), caract) << " fois.";
    return 0;
}

int nbOccurences(char T[], int tailleTableau, char c) {
    int r;
    for(int i=0; i<tailleTableau; i++){
        if(c == T[i]) r++;
    }
    return r;
}
