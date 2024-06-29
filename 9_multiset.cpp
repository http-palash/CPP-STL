//  only obeys sorted order non unique elements are allowed

#include<bits/stdc++.h>
using namespace std;

void this_multiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    for(auto it : ms){ // 1 1 1 1 
        cout << it << " ";
    }
    ms.erase(1);

    cout << endl;
    for(auto it : ms){  // all erased
        cout << it << " ";
    }

    ms.insert(1);
    ms.insert(3);
    ms.insert(3);
    ms.insert(2);
    ms.insert(5);

    cout << endl;
    for(auto it : ms){  //1 2 3 3 5 
        cout << it << " ";
    }

    cout << endl;

    int cnt = ms.count(3);
    cout<< "\nCount is : "<< cnt <<endl;

    ms.erase(ms.find(3));
        for(auto it : ms){// 1 2 3 5 
        cout << it << " ";
    }

    cout << endl;
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(6);
    ms.insert(7);

    for(auto it : ms){ // 1 2 3 3 3 4 5 5 6 7 
        cout << it << " ";
    }

    cout << endl;
    // range 
    ms.erase(ms.find(3), ms.find(5)); // 1 2 5 5 6 7 
    for(auto it : ms){
        cout << it << " ";
    }
     

}
int main(){

    this_multiset();
    return 0;
}