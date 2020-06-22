#include <iostream>
#include <vector>

using namespace std;
int main(){

double sum=0;
int lenght;
int newNum;
vector<int>vec;
cin>>lenght;

for(int i=0;i<lenght;++i)
{
    cin>>newNum;
    vec.push_back(newNum);
    sum+=vec[i];
}

int average=sum/lenght;

for(int j=0;j<lenght;++j)
{
    if(vec[j]>=average)
    {
        cout<<vec[j]<<" ";
    }
}
return 0;
}
