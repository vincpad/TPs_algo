#include <iostream>

using namespace std;
double sup(double n1, double n2);

int main()
{
    //Variables
    double E1=0, E2=0, TP=0;

    //Programme
    cout << "Notes :" << endl << "TP : ";
    cin >> TP;
    cout << "Examen ecrit 1 : ";
    cin >> E1;
    cout << "Examen ecrit 2 : ";
    cin >> E2;

    if(TP <= 5 || E1 <= 5 ||E2 <= 5){
        cout << "Unite non validee.";
    }
    else{
        double note_finale;
        note_finale = sup((E1+E2)/2, (3*((E1+E2)/2)+TP)/4);
        cout << "Note finale : " << note_finale;
        if(note_finale >=10){
            cout << " ; unite validee.";
        }
        else{
            cout << " ; unite non validee.";
        }
    }
}
double sup(double n1, double n2){
    if(n1>n2){
        return n1;
    }
    else{
        return n2;
    }
}
