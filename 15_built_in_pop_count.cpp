#include<bits/stdc++.h>
using namespace std;


void return_set_bits(){
    int num = 7;
    int cnt = __builtin_popcount(num);
    cout << endl << "num : 7 , count : "<<cnt << endl;
    num = 6;
    cnt = __builtin_popcount(num);
    cout << endl << "num : 6 , count : "<<cnt << endl;
}

int main(){
    return_set_bits();
    return 0;
}