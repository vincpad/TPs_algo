#include <iostream>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

using namespace std;

void affiche_mat(bool mat[20][20], int dim);
int nb_voisins(bool mat[20][20], int i, int j, int dim);
void creer_colonie(bool mat[20][20], int nb, int dim);
bool checkIfLives(bool mat[20][20], int x, int y, int dim);
bool actualiser(bool mat[20][20], int dim);

int randNum(int dim);

bool cells[20][20] = {false};

int main()
{
    srand(time(NULL));
    creer_colonie(cells, 50, 20);
    affiche_mat(cells, 20);
    for(int i=0; i<200; i++){
        //system("pause");
        system("cls");
        actualiser(cells, 20);
        affiche_mat(cells, 20);
        Sleep(100);
    }
    return 0;
}

bool actualiser(bool mat[20][20], int dim){
    bool newMat[20][20];
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            newMat[i][j] = checkIfLives(newMat, i, j, 20);
        }
    }
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim; j++){
            mat[i][j] = newMat[i][j];
        }
    }
}

bool checkIfLives(bool mat[20][20], int x, int y, int dim){
    int v = nb_voisins(cells, x, y, 20);
    //cout <<"x"<<x<<" y"<<y<<" -> "<<v<<endl;
    bool result = false;
    if(!mat[x][y] && v == 3) result = true;
    if(mat[x][y] && (v == 3 || v == 2)) result = true;
    return result;
}

void affiche_mat(bool mat[20][20], int dim) {
    cout << "  0 1 2 3 4"<<endl;
    for(int i=0; i<dim; i++){
        cout << i << " ";
        for(int j=0; j<dim; j++){
            if(mat[i][j]==true) cout << "o";
            else cout << " ";
            cout << " ";
        }
        cout << endl;
    }
}

int nb_voisins(bool mat[20][20], int x, int y, int dim) {
    int startX = x-1, endX = x+1, startY = y-1, endY = y+1;
    if(x == 0) startX = x;
    if(x == dim-1) endX = x;
    if(y == 0) startY = y;
    if(y == dim-1) endY = y;

    int v=0;
    for(int i=startX; i<=endX; i++){
        for(int j=startY; j<=endY; j++){
            if(mat[i][j]) v++;
        }
    }
    if(mat[x][y]) v--;
    return v;
}

void creer_colonie(bool mat[20][20], int nb, int dim) {
    for(int i=0; i<nb; i++){
        mat[randNum(20)][randNum(20)] = true;
    }
}

int randNum(int dim) {
    return rand()%dim;
}
