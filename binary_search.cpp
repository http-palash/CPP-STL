#include<iostream>
using namespace std;

void bubble_sort(int arr[],int size){
    for(int i = 0;  i < size; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int bin_search(int arr[],int left,int right,int x){
    if(left<=right){
        int mid = (left+right)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid] > x){
            return bin_search(arr,left,mid-1,x);
        }else{
            return bin_search(arr,mid+1,right,x);
        }
    }
    return -1;
}

int main(){
    int arr[] = {34,24,67,23,68};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);

    for(auto it : arr){
        cout << it << " ";
    }

    cout<< "\nFound at index : "<< bin_search(arr,0,size,68);
    return 0;
}


        // int left = 0;
        // int right = n - 1;
        
        // while(left <= right) {
        //     int mid = (left +right) / 2;
            
        //     if (arr[mid] == k) {
        //         return mid; // Element found
        //     } else if (arr[mid] < k) {
        //         left = mid + 1; // Search the upper half
        //     } else {
        //         right = mid - 1; // Search the lower half
        //     }
        // }