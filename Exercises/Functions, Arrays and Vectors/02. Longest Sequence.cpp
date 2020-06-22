#include <iostream>
#include <array>

void longestSequence(int array[], int length) {

    int number1 = 0;
    int number2 = 0;
    int counter = 1;
    int minCounter = INT_MIN;
    int number = 0;
    if (length == 1) {
        number = array[0];
        number2 = array[0];
    }

    for (int i = 1; i < length; i++){
        number1 = array[i - 1];
        number2 = array [i];

        if (number1 == number2){
            counter++;
        } else {
            counter = 1;
        }

        if (minCounter <= counter) {
            number = number1;
            minCounter = counter;
        }

        
    }

    if (minCounter <= 1) {
        std::cout << number2 << std::endl;
    } else if (minCounter > 1) {
        for (int i = 0; i < minCounter; i++) {
            std::cout << number << " ";
        }
    }
}

int main() {

    int length = 0;
    std::cin >> length;

    if (length == 0) {
        std::cout << "0";
        return 0;
    }

    if (length > 0) {
        int array[length] = {0};

        for (int i = 0; i < length; i++) {
            std::cin >> array[i];
        }
        longestSequence(array, length);
        } else {
            return 0;
    }

    return 0;
}
