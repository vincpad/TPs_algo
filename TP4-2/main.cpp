#include <iostream>

using namespace std;

int main()
{
    int tableau[4][4] = {   {4 ,12,5 ,3 },
                            {3 ,35,8 ,12},
                            {22,10,23,11},
                            {8 ,3 ,9 ,11}  };
    // question a
    int minia;
    int maxia=0;
    for(int i=0; i<4; i++){
        minia = tableau[i][0];
        for(int j=0; j<4; j++){
            if(tableau[i][j]<minia){
                minia = tableau[i][j];
            }
        }
        if(minia>maxia){
            maxia = minia;
        }
    }

    // question b
    int minib;
    int maxib=0;
    for(int i=0; i<4; i++){
        minib = tableau[0][i];
        for(int j=0; j<4; j++){
            if(tableau[j][i]<minib){
                minib = tableau[j][i];
            }
        }
        if(minib>maxib){
            maxib = minib;
        }
    }

    cout << "Min-Max (question a): " << maxia << endl;
    cout << "Min-Max (question b): " << maxib;

}
