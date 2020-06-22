#include <iostream>


using namespace std;


int main() {

    int numberA;
    int numberB;
    cin >> numberA >> numberB;

    if(numberA > numberB){
        cout << numberB << " " << numberA << endl;
    }else {
        cout << numberA << " " << numberB << endl;
    }


    return 0;
}
