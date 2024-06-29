#include<bits/stdc++.h>
using namespace std;

void this_sort(){
    int a[] = {65,23,62,2,1};
    int size = sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    for(auto i : a){
        cout << i << " ";
    }

    cout << endl;

    vector<int> a1; 
    a1.push_back(751);
    a1.push_back(65);
    a1.emplace_back(635);
    a1.push_back(652);
    a1.push_back(61);

    sort(a1.begin(),a1.end());
    for(auto it : a1){
        cout << it << " ";
    }
}

void specific_sort(){
    cout<< endl;
    int arr[] = {1,3,5,2,43,8,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr+2,arr+size);
    for(auto i : arr){
        cout << i << " ";
    }
}

void descending_sort(){
    cout<< endl;
    int arr[] = {1,3,30,20,100,5,2,43,8,6};
    // int size = sizeof(arr)/sizeof(arr[0]);
    int siz = size(arr);
    // 1st it, 2nd it, 3rd is comparator
    std:: greater<int>a;
    sort(arr, arr+siz,a);
    for(auto i : arr){
        cout << i << " ";
    }
}

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second ) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(p1.second == p2.second){
        if(p1.first > p2.first) return true;
        return false;
    }
    return -1;
}

void sort_custom(){
    cout << endl;
    pair<int,int> a[] = 
    {
        {1,2},
        {2,1},
        {4,1},
        {0,1}
    };
    // sort acc to 2nd element 
    //  if second element is same ,then
    // sort acc to first element but in descending
    int n = size(a);
    // cout << n; // 3
    sort(a,a+n,comp);
    for(auto it : a){
        cout << it.first << " " << it.second << endl;
    }
}


int main(){
    this_sort();
    specific_sort();
    descending_sort();
    sort_custom();
   
    return 0;
}