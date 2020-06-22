#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
 
 
int main()
{
 
    int N;
    cin >> N;
 
    vector<int> arr(N); // or int arr[N] = {0};
 
    for(int k = 0; k < N; ++k)
    {
        cin >> arr[k];
    }
 
 
 
 
 
    int most_Frequent_num = 0;
    int print_index = 0;
    int counter_most_equal = 0;
    for(int i = 0; i < N; ++i)
    {
        int counter_Frequent_loop = 0;
       
        for(int j = 0; j < N; ++j)
        {
            if(arr[i] == arr[j])
            {
                counter_Frequent_loop++;
            }
            if(most_Frequent_num < counter_Frequent_loop)
            {
                most_Frequent_num = counter_Frequent_loop;
           
             counter_most_equal++;
            }
 
               
 
 
        }
    }
 
 
 
    vector<int> numbers;
    for (int i = 0; i <= N; ++i)
    {
         int test_counter = 0;
        for(int j = 0; j <= N; ++j)
        {
        
            if(arr[i] == arr[j])
            {
                test_counter++;
               if(counter_most_equal == test_counter)
               {
                    print_index = arr[i];
                   // cout << print_index << '\n';
                    numbers.push_back(print_index);
               }else
                {
 
                }
             }
           
        }
             
    }
 
 
 
    
 
   
    if(counter_most_equal <= 1 )
    {
       
        for (int i = 0; i < numbers.size()-1; i++)
         {
          cout << numbers.at(i) << ' ';
         }
        return 2;
    }else
    {
 
         for (int i = 0; i < numbers.size(); i +=counter_most_equal)
         {
         sort(numbers.begin(), numbers.end());
          cout << numbers.at(i) << ' ';
         }
    }
 
    cout << '\n';
    return 0;
}
