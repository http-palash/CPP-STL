/* containers : pairs*/

#include<bits/stdc++.h>
using namespace std;
// #include<math.h>
// #include<string.h>

void pairs(){
    
    //pair is a part of utility library it is a type of container 
    
    std::right;
    
    pair<int,int>p ={1,2};
    cout << setw(20) << "p.first : "<< setw(20) << p.first << endl;
    cout << setw(20) << "p.second : "<< setw(20) << p.second << endl;
    
    pair<int,pair<int,int>> q = {3,{4,5}};
    cout << setw(20) << "q.first : " << setw(20) << q.first << endl;
    cout << setw(20) << "q.second.first : " << setw(20) << q.second.first << endl;
    cout << setw(20) << "q.second.second : "<< setw(20) << q.second.second << endl;

    pair<int,int>arr[] = {{6,7},{8,9},{9,10}};
    cout << setw(20) << "arr[0].first : " << setw(20) << arr[0].first  << endl;
    cout << setw(20) << "arr[0].second : "<< setw(20) << arr[0].second<< endl;
    cout << setw(20) << "arr[1].first : " << setw(20) << arr[1].first  << endl;
    cout << setw(20) << "arr[1].second: " << setw(20) << arr[1].second << endl;
    cout << setw(20) << "arr[2].first : " << setw(20) << arr[2].first  << endl;
    cout << setw(20) << "arr[2].second: " << setw(20) << arr[2].second << endl;

}

using namespace std;
int main(){
    pairs();
    return 0;
}