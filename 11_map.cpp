// keys are unique values can be same 
// Map tores unique keys in sorted order similar to set ds

#include<bits/stdc++.h>
using namespace std;

int main(){
    // key 1 int value is 1 int 
    map<int, int> mp;

    // key 1 int value is 2 int 
    map<int, pair<int, int>> mpp;

    //key is 2 int value is one int
    map< pair<int, int>,int>mppp;

    mp[1] = 2;

    // mp.emplace({2,3});
    // mp.emplace({1,2});
    mp.insert({1,2});
    mp.insert({2,2});
    mp.insert({3,2});
    // mp.emplace({1,2}); 

    for(auto it : mp){
        cout << it.first << " "<< it.second << endl;
    }

    auto it = mp.find(3);
    // cout << it.first; // error
    
    mppp[{2,3}] = 10;
    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }






    return 0;
}