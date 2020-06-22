#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;
vector<pair<string, int>> fill_Vector_of_pair(string name);

void printFunction(const vector<pair<string, int>> & VEC);

vector<pair <string, int>> fill_Vector_of_pair(string name)
{
    string word;

    stringstream ss(name);

    vector<pair<string, int>> vecPair;
    bool found = false;
    while (ss >> word)
    {
        int n = vecPair.size();
       for (int i = 0; i < n; ++i)
        {
            if(vecPair[i].first == word)
            {
                vecPair[i].second+=1;
                found = true;
                break;
            }
         found = false;
        }
        if (found == false)
        {
            vecPair.emplace_back(make_pair(word, 1));
            
        }
    }

    return vecPair;
}

void printFunction(const vector<pair<string, int> >& VEC)
{
    for (auto it = VEC.begin(); it != --VEC.end(); ++it) 
    {
        if(it->second % 2 != 0)
        {
             std::cout << (*it).first << ", ";
        }

    }
     std::cout << (--VEC.end())->first;



}

int main()
{
    string sentence;
    getline(cin, sentence);
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

   printFunction(fill_Vector_of_pair(sentence));
    return 0;
} 
