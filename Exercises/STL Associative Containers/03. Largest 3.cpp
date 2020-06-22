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

     sort(numbers.begin(), numbers.end(), greater<int>()); 
   if(numbers.size() >= 3)
    {
        for (int i = 0; i < 3; ++i)
        {
            cout << numbers.at(i) << " ";
        }
    }
    else if (numbers.size() == 2)
    {
         for (int i = 0; i < 2; ++i)
        {
            cout << numbers.at(i) << " ";
        }
        
    }
    else if (numbers.size() == 1)
    {
         for (int i = 0; i < 1; ++i)
        {
            cout << numbers.at(i) << " ";
        }
       
    }
  

    
    return 0; 
} 



