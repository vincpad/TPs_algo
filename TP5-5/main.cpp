#include <iostream>

using namespace std;

int nbOccurences(char T[], int tailleTableau, char c);
char voyelle(char T[], int tailleTableau);

int main()
{
    char T[16] = {'c','o','m','m','e','n','t','a','l','l','e','z','v','o','u','s'};
    cout << "Voyelle la plus frequente : " << endl;
    cout << voyelle(T, 16);
    return 0;
}

char voyelle(char tableau[], int tailleTableau){
    char voyelles[6] = {'a','e','u','i','o','y'};
    int nbr[6] = {0};
    for(int i=0; i<6; i++){
        for(int j=0; j<tailleTableau; j++){
            if(voyelles[i]==tableau[j]) nbr[i]++;
        }
    }
    int valMax = nbr[0];
    int nLettreMax;
    for(int i=0; i<6; i++){
        if(nbr[i]>valMax){
            valMax = nbr[i];
            nLettreMax = i;
        }
    }
    char r = voyelles[nLettreMax];
    return r;
}

int nbOccurences(char T[], int tailleTableau, char c) {
    int r;
    for(int i=0; i<tailleTableau; i++){
        if(c == T[i]) r++;
    }
    return r;
}
