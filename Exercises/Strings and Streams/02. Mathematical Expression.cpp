#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
 
 
int main()
{
    string input;
    getline(cin, input);
    stringstream math;
    math << input;
    int bracketsCounter = 0;
   // string::iterator it;
    for (size_t i = 0; i < input.size(); ++i)
    {
        switch (input[i])
        {
                case '(':   bracketsCounter++;
                    break;
                case ')':   bracketsCounter++;
                    break;
                

        }

       


    }


    bracketsCounter % 2 == 0 ? cout << "correct" : cout << "incorrect";

    // if(bracketsCounter % 2 == 0)
    // {
    //     cout << "correct";
    // }
    // else
    // {
    //     cout << "incorrect";
    // }

    

    return 0;
}
