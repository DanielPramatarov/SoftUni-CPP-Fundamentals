#include <iostream> 
#include <sstream> 
#include <vector> 
using namespace std; 
vector<int> ExtractNums(string sentece);
vector<string> words (string unput);
void print (vector<int> nums, vector<string> words);

vector<int> ExtractNums(string sentece){


	stringstream geek; 
    string temp;
    vector <int> vec;
     vector <string> words;
    geek << sentece;
    string  output;
 
    
    
	int x = 0; 

     while (!geek.eof())
    {
    
        geek >> temp;

	 if(istringstream(temp) >> x)
     { 
       
        vec.push_back((char)x);

     } 
     
     }

       return vec;
}

vector<string> Extractwords (string sentece)
{
    stringstream geek; 
    string temp;
    vector <string> words;
    geek << sentece;
    string  output;
    int x = 0;
     while (!geek.eof())
    {
        geek >> temp;
     if(!(stringstream(temp) >> x))
     {
        words.push_back(temp);
     }
    }
 
    return words;
}

void print (vector<int> nums, vector<string> words)
{   

    int sum = 0;
    for(auto i = 0; i < nums.size(); ++i)
    {
        sum += nums.at(i);

    }
     cout  << sum << '\n';
    
    for(auto i = 0; i < words.size(); ++i)
    {
       cout << words.at(i) << ' ';

    }
    cout << '\n';



}

int main()
{
    string s;
    getline(cin,s);

    print(ExtractNums(s), Extractwords(s));
   




    return 0;
}
