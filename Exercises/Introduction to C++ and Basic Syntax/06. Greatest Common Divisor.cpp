#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int numberA;
    int numberB;
    cin >> numberA >> numberB;

    double R = numberA % numberB;

    while(numberB != 0){
        R = numberA %numberB;
        numberA = numberB;
        numberB = R;
    }
        cout << numberA;




    return 0;
}


