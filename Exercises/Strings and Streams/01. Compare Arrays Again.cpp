#include <iostream>

int main() {
    std::string arr1, arr2;
    std::getline(std::cin,arr1);
    std::getline(std::cin,arr2);

    if (arr1 == arr2) {
        std::cout << "equal";
        
    }else
    {
    std::cout << "not equal";
    }
    
    return 0;
}
