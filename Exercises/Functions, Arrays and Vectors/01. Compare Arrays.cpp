#include <iostream>
#include <array>
using namespace std;

int main()
{

    int first_array_size;
    cin >> first_array_size;

    int arr[first_array_size] = {0};

    for(int i = 0; i < first_array_size; i++){
       cin>>arr[i];
    }



cout << endl;

    int second_array_size;
    cin >> second_array_size;

    int arr2[second_array_size] = {0};

    for(int j = 0; j < second_array_size; j++){
       cin>>arr2[j];
    }



    int equalsCounter = 0;
    for(int p = 0; p < first_array_size; p++)
    {
        if(arr[p] == arr2[p])
        {
            equalsCounter++;
        }
    }


  if(first_array_size > second_array_size || equalsCounter != first_array_size  || first_array_size < second_array_size)
    {
        cout << "not equal";
    }



    if(equalsCounter == first_array_size  || equalsCounter == second_array_size)
    {
         cout << "equal";
    }




    return 0;
}


