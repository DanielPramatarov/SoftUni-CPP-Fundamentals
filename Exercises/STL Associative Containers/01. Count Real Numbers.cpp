#include <iostream>
#include <string>
#include <map>
#include <sstream>

void countRealNumbers(std::string input) {

    double numbers = 0.0;
    std::istringstream iss (input);
    std::map<double, double> mapNumbers;

    while (iss >> numbers) {
        mapNumbers[numbers]++;
    }

    std::map<double, double>::iterator itr;

    for(itr = mapNumbers.begin(); itr != mapNumbers.end(); ++itr) {
        std::cout << itr -> first << " -> " << itr -> second << std::endl;
    }
}

int main() {

    std::string input;

    getline(std::cin, input);

    countRealNumbers(input);

    return 0;
}
 
