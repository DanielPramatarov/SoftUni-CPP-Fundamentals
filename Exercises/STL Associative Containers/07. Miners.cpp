#include <iostream>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <vector>
#include <set>




using namespace std;
     
int main() {
    string command;
    int resource;
    vector<pair<string, int>> sim;
    while (std::cin >> command && command != "stop" && std::cin >> resource)
    {
        const auto iter {std::find_if(sim.begin(), sim.end(), [&command](const std::pair<std::string, int>&  value) { return value.first == command; })};
        if (iter != sim.end())
        {
            iter->second += resource;
        }
        else if (iter == sim.end())
        {   
            sim.emplace_back(make_pair(command, resource));
        }
    }

    for (int a = 0; a < sim.size(); ++a)
    {
        cout << sim[a].first << " -> " << sim[a].second<< endl;
    }
    return 0;
}
   
