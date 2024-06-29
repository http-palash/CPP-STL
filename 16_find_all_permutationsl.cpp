#include<bits/stdc++.h>
using namespace std;


void find_all_permutation(){

    string s = "Palash";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(),s.end()));
    
    cout << endl;
    s = "231";
    // note : first sort then find permutations
    sort(s.begin(),s.end());
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(),s.end()));
    
}



int main(){
    find_all_permutation();
    return 0;
}