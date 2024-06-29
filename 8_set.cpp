/*
   Set container stores everything in sorted order and unique
   tree is maintained here  lonn time complexity here 
*/
#include<bits/stdc++.h>
using namespace std;

void display(set<int> st){
    
    // set<int> temp = st;
    // while(!temp.empty()){
    //     cout << temp.top();
    // }
    cout << "Displaying set : ";
    for(auto temp : st){
        cout << temp << " ";
    }
    cout << endl;
}
void this_set(){

    set<int> s;
    s.insert(0);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.emplace(5);
    display(s);

    auto it = s.find(0); //-->
    cout<<"\ns.find(0) : " << *it << endl; 
    it = s.find(100);
    cout<<"\ns.find(100) : " << *it << endl; 

    
    cout <<"s.erase(5) ";
    s.erase(5);
    cout << endl;
    display(s);

    int value = 8;
    int cnt = s.count(value);

    cnt == 1 ? cout<< value <<" is present in set \n" : cout<< value << " is not present in set\n"; 
    cout << endl;

    auto it1 = s.find(0);

    // erase in between
    s.erase(s.find(1),s.find(4));
    display(s);

    // std:: set<bool> res;
     s.lower_bound(2);
     s.upper_bound(3);

}

int main(){
 this_set();
 return 0;
}