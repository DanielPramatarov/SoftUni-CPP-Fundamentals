#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
#include <sstream>
 
using namespace std;
 
string readString(){
   string line;
   getline(cin, line);
   return line;
}
 
void findMaxValue(vector<string> Vec){
 
    string currentString;
    string temp;
    int temporaryInteger = 0;
    int maxValue = INT_MIN;
    int len = Vec.size();
    for(int i = 0; i < len; ++i){
        currentString = Vec[i];
        int currentLen = currentString.size();
        for(int k = 0; k < currentLen; ++k){
            if(isdigit(currentString[k]) == true){
               temp += currentString[k];
            }
        }
 
        temporaryInteger = stoi(temp);
        if(temporaryInteger > maxValue){
            maxValue = temporaryInteger;
        }
 
        temporaryInteger = 0;
        temp = " ";
    }
 
     cout << maxValue;
 
}
 
 
int main()
{
    string eachElement;
    string inputData;
    vector<string> input;
    inputData = readString();
    istringstream istr(inputData);
 
    while(istr >> eachElement){
        input.push_back(eachElement);
    }
 
       findMaxValue(input);
 
 
    return 0;
}
