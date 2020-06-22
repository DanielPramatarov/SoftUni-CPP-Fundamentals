#include<iostream>
#include<map>
#include<string>
#include<vector>
#include <iomanip> 
#include <sstream> 
#include <algorithm> 

using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    vector<string> VecOfString;
    int shiftNum;
    cin >> shiftNum;
    stringstream ss(sentence);
    string temp;


        while (ss >> temp)
        {
            VecOfString.push_back(temp);
        }

        rotate(VecOfString.rbegin(), VecOfString.rbegin() + shiftNum, VecOfString.rend());


        for(auto x : VecOfString)
        {
            cout << x << endl;
        }

        return 0;
}

