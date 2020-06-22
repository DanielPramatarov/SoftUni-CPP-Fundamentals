#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct sort_Price {
        bool operator()( std::pair<std::string, double> &left,  std::pair<std::string, double> &right) {
            return left.second > right.second;
        }
    };

int main()
{
    int numOfIters;
    cin >> numOfIters;
    string nameOfProduct;
    double priceOfItem;
    double countOftheItems;

    map<string, double> totalSum;
    vector<pair<string, double>> products;
    vector<pair<string, double>>::iterator it;
    double sum = 0;
    for (int i = 0; i < numOfIters; i++)
    {
        cin.ignore();
        getline(cin, nameOfProduct);
        cin >> priceOfItem >> countOftheItems;
        double finalPrice = countOftheItems * priceOfItem;

        

         auto iter {std::find_if(products.begin(), products.end(), [&nameOfProduct](const std::pair<std::string, double>&  value) { return value.first == nameOfProduct; })};

        if (iter == products.end())
        {
             products.emplace_back(make_pair(nameOfProduct, finalPrice));
             sum += finalPrice;
        }
  
    }

    sort(products.begin(), products.end(),sort_Price());
   

    cout << "The total sum is: " << sum << " lv." << endl;

    for(auto v : products)
    {
        cout << v.first << " " << v.second << endl;
    }

    return 0;
}
