
#include <iostream>
// 
#include <string>
// 
#include <vector>
#include <map>
#include <set>
#include <sstream>
#include <algorithm>


using namespace std; 
 
int main() 
{

        string sentence;
        getline(cin, sentence);
        vector<string> vec;
         string temp ;
    
   
      
       istringstream ss(sentence); 

        string word; 
    
    
     while (ss)
    {
        ss >> word;
        vec.push_back(word);
    }

    for(auto &s: vec)
    {
        for(auto &c : s)
        {
            c = tolower(c);
        }
    }

        set<string> words;
        for (auto x : vec)
        {
            string tempWord = x;
            if(tempWord.size() <= 4)
            {
                words.insert(tempWord);
            }
         
        }
        for (std::set<std::string>::iterator it = words.begin(); it != --words.end(); ++it)
         {
                 std::cout << *it << ", ";
          }
           std::cout << *(--words.end());

       

        return 0; 

} 

