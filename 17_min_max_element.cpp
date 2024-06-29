#include<bits/stdc++.h>
using namespace std;

int min(int a[],int n){
    int mini = *min_element(a,a+n);
    cout << mini;
    return mini;
}

int max(int a[],int n){
    int maxi = *max_element(a,a+n);
    cout << endl << maxi;
    return maxi;
}


int main(){
    int a[] = {3,45,2,4,6,7,199,455,232,1,3};
    int n = size(a);
    int mini;
    min(a,n);
    max(a,n);
    return 0;
}