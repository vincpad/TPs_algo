#include <iostream>

using namespace std;

int main()
{
    int valPour0degC = 32;
    int valPour100degC = 212;

    int rapport = valPour100degC-valPour0degC;
    for(int i=20; i>=-10; i--) {
        float f = i*5*rapport/100+float(valPour0degC);

        cout << i*5 << " degres Celsius -> " <<  f << "degres Fareinheit" << endl;
    }
}
