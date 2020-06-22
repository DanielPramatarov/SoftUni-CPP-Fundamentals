#include <iostream> 
#include <sstream> 
#include <vector>
#include <climits>
#include <string>
#include <math.h>  

#include <algorithm>
using namespace std;


int main() 
{
    vector<double> numbers;
    string ints;
    getline(cin, ints);

    stringstream ss(ints);
    double num;
    while (ss >> num)
    {
        numbers.push_back(num);
    }
    sort(numbers.begin(), numbers.end(), greater<int>());
    
    for (int i = 0; i < numbers.size();++i) 
    {
        int root = sqrt(numbers.at(i));
        if(numbers.at(i) == root * root)
        {
            cout << numbers.at(i) << " ";
        }else
        {
            continue;
        }

    }
        //cout << sqrt(16) == 4
        return 0; 
} 




