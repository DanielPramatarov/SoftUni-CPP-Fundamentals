#include <iostream> 
#include <sstream> 
#include <vector>
#include <climits>
#include <string>

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

     sort(numbers.begin(), numbers.end(), less<int>());
     for (int i = 0; i < numbers.size() - 1; ++i)
     {
         cout << numbers.at(i) << " <= ";
     }
     cout << numbers[numbers.size()-1];

     return 0; 
} 



