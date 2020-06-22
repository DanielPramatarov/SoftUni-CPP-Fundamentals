#include<iostream>
using namespace std;

void cartesianProduct(int arr[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        for(int j = 0; j < arraySize; j++) {
            cout << arr[i] * arr[j] << ' ';
        }
    }
}

int main() {

    int arraySize;
    cin >> arraySize;

    int arr[arraySize] = {0};

    for(int i = 0; i < arraySize; i++) {
        cin >> arr[i];
    }

    cartesianProduct(arr, arraySize);

    return 0;
}
