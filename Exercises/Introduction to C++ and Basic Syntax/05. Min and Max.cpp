#include <iostream>
#include <cmath>

using namespace std;


int main(){

   int n;
   cin >> n;
   int maxNum = INT_MIN;
    int minNum = INT_MAX;

   for(int i = 1; i <= n; i++){
        int numbers;
        cin >> numbers;

        if(numbers > maxNum){
            maxNum = numbers;
        }
        if(numbers < minNum){
            minNum = numbers;
        }
   }
        cout << minNum << " " << maxNum;



    return 0;
}


