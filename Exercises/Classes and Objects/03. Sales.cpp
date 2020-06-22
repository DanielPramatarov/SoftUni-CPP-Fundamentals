#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <iomanip> 

using namespace std;
int main()
{
    int numOfIterations;
    cin >> numOfIterations;
    string city;
    string product;
    double price;
    double numberOfItems;
    
    map<string, double> m;
    
        
        int i = 0;
        while( i < numOfIterations)
        {
            cin >> city >> product >> price >> numberOfItems;
           double result = price * numberOfItems;
            m[city] += result;
            
            ++i;
            
            
        }
        
        std::cout << std::fixed;
        for(auto x : m)
        {
            cout << x.first << std::setprecision(2) << " -> " << x.second << endl;
        }
    

    return 0;
}
