#include <iostream>
#include <sstream>
#include <string>
#include <map>
#include <vector>

using namespace std;
int main()
{
    int matrixSize;
    cin >> matrixSize;

    

    vector<vector<int>> matrix;
    for(int i = 0; i < matrixSize; i++)
    {
        vector<int> row;
        for(int j = 0; j < matrixSize; j++)
        {
            int value;
            cin >> value;
            row.push_back(value);
        }
        matrix.push_back(row);
    }


    int sum = 0;
    for(int i = 0; i < matrixSize; i++)
    {
        for(int j = 0; j < matrixSize; j++)
        {
           if (i == j ||  (i == matrixSize - j - 1) ) 
            {
                continue;
             }
            else
            {
               if(matrix[j][i] % 2 != 0)
               {
                sum += matrix[j][i];

               }
            }
        }
       
    }

    cout << "The sum is: " << sum << endl;



    return 0;
}
