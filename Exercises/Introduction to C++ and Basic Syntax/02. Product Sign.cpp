#include <iostream>


using namespace std;


int main() {

     double numberA, numberB, numberC;
    cin >> numberA >> numberB >> numberC;

   long long  product = numberA * numberB * numberC;


    if(product >= 0){
        cout << "+" << endl;
    }else {
        cout << "-" << endl;
    }





    return 0;
}

