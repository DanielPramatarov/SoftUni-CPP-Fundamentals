#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<iomanip>
#include <stdio.h>
#include <ctype.h>



using namespace std;

int main(){

    int cols;
    int rows;
    cin >> cols >> rows;
    vector<vector<int>> matrix(cols, vector<int>(rows));
    int searchedNum;
    
    bool isFound = false;

    for (int col = 0; col < cols; ++col)
    {
        for (int row = 0; row < rows; ++row)
        {
            cin >> matrix[col][row];
        }
    }



    cin >> searchedNum;

    for (int col = 0; col < cols; ++col)
    {
        for (int row = 0; row < rows; ++row)
        {
            if(matrix[col][row] == searchedNum)
            {
                isFound = true;
                cout << col << " " << row << '\n';
            }
        }
         
    }
    if(!isFound)
    {
        cout << "not found";
    }

        return 0;
}
