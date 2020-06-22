#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include<stack>
#include <queue>
//using namespace std;
std::vector<int> readFunction(std::string passedString){
    std::vector<int> rail;
    std::stringstream iss( passedString );
    int number;
    while ( iss >> number )  {rail.push_back(number);}
    return rail;
}

int main(){

std::vector<int> railA;
std::vector<int> railB;
std::string input;

    getline (std::cin, input);
    railA=readFunction(input);
    getline (std::cin, input);
    railB=readFunction(input);


std::priority_queue<int> Result;
std::vector<char> TrainChar;

    for ( int i : railA) {Result.push(i);}
    for ( int i : railB) {Result.push(i);}
    while (!Result.empty()){
        if ( std::find (railA.begin(), railA.end(), Result.top()) != railA.end() ) {TrainChar.push_back('A');}
        else {TrainChar.push_back('B');}
        Result.pop();
        }
    for(int n=TrainChar.size()-1; n>=0 ; n--)
    {
    std::cout<<TrainChar[n];
    }    
    std::cout<<std::endl;
    std::vector<int> train (railA.size()+railB.size());
    
    merge(railA.begin(), railA.end(), railB.begin(), railB.end(), train.begin());
    
    sort(train.begin(), train.end(),std::greater<int>());
    
    for(auto n: train){std::cout<<n<<" ";}
}
