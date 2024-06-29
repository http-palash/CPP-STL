#include<iostream>
using namespace std;

void sort(int arr[],int size){

    int count = 0;
    for(int i = 0; i < size-1; i++){
    for(int j = 0; j < size-1-i; j++){

    cout << j << " > "<< j+1 << endl; 
    count++;
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }        
    }
    cout << "count is : " <<count << endl;
 }
}
int main(){

    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    cout<< size << endl;

    for(int it : arr){
        cout << it << " ";
    }
    return 0;
}