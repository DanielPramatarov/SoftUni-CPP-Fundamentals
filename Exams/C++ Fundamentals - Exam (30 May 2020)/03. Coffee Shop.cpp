#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Coffee
{
private:
    std::string name;
    double price;
    double rating;

public:
    Coffee( std::string name_ , double price_ , double rating_ ) :
        name(name_),
        price(price_),
        rating(rating_)
        {}    


    double getRating ()
    {
        return rating;
    }

    double getPrice()
    {
        return price;
    }
    string getName()
    {
        return name;
    }
    void Decrease(double newPrice)
    {
        price = newPrice;
    }

};



int main()
{

    int numOfIters;
    cin >> numOfIters;
    
    
    vector<Coffee> menu;

    string nameOfProduct;
    double priceOfProduct;
    double ratingOfProduct;

    for (int i = 0; i < numOfIters; i++)
    {
        cin.ignore();
        getline(cin, nameOfProduct);
        cin >> priceOfProduct >> ratingOfProduct;

        menu.push_back(Coffee(nameOfProduct, priceOfProduct, ratingOfProduct));

    }

    vector<Coffee>::iterator it = menu.begin();
    for (; it != menu.end(); ++it)
    {

            if(it->getRating() >= 4   && it->getRating() <= 5.99)
            {
                double decrees = it->getPrice() - (it->getPrice() * 0.1);
                it->Decrease(decrees);

            }

            if (it->getRating() < 4)
            {
                it = menu.erase(it);
                --it;
            }
        
    }

      
    if(menu.empty())
    {
        cout << "The menu is empty" << endl;
    }



    for (int i = 0; i < menu.size(); ++i)
    {
 
        cout << menu.at(i).getName() << " " <<  menu.at(i).getPrice() << endl;
    }

        return 0;
}



