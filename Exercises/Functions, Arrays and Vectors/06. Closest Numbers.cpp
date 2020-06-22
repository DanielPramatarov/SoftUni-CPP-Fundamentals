#include <iostream>
#include <stdlib.h>
 
int main()
{
    int n, minDiff = INT_MAX;
    std::cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        std::cin>>arr[i];
    }
 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                if(j != i)
                    if(abs(arr[i] - arr[j]) <= minDiff)
                        minDiff = abs(arr[i] - arr[j]);
        }
    }
 
    if(n!=1)
    std::cout<<minDiff<<std::endl;
    else
        std::cout<<0<<std::endl;
    return 0;
}
