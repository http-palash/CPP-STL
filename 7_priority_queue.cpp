/*
 priority queue tree DS is maintained and stack
 min priority queue = min heap
 max priority queue = max heap
 time complexity of pq = push pop = O(logn) 
 top // seek = 0(1)

*/ 

#include<bits/stdc++.h>
using namespace std;

void display(priority_queue<int> pq){
    
    priority_queue<int> temp;
    temp = pq;

    cout << endl;
    cout << "Displaying queue : \n";

    while(temp.empty()!=1){
        cout << temp.top() << endl;
        temp.pop();
    }
}
void display_2(priority_queue<int,vector<int>,greater<int>> pq){ 
    
    priority_queue<int, vector<int>, greater<int>> temp = pq; 

    cout << endl;
    cout << "Displaying queue : \n";

    while(!temp.empty()){
        cout << temp.top() << endl;
        temp.pop();
    }
}

void min_heap(){
   //min priority queue
    priority_queue<int> pq;
    pq.push(4);
    pq.push(1);
    pq.push(90);
    pq.push(3);
    pq.push(80);

    display(pq);
    cout << "Front of min priority queue is : "<< pq.top() << endl;
    cout << "Pop element : " << pq.top() << endl;
    pq.pop();
    display(pq);

    cout<< "\npq.size() : "<< pq.size() << endl;
    cout<< "\npq.emplace(45) : "<< endl;
    pq.emplace(45);
    display(pq);
}

void max_heap(){
   //max priority queue
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(4);
    pq.push(1);
    pq.push(90);
    pq.push(3);
    pq.push(80);

    display_2(pq);
    cout << "Front of min priority queue is : "<< pq.top() << endl;
    cout << "Pop element : " << pq.top() << endl;
    pq.pop();
    display_2(pq);

    cout<< "\npq.size() : "<< pq.size() << endl;
    cout<< "\npq.emplace(45) : "<< endl;
    pq.emplace(45);
    display_2(pq);
}

int main(){

    cout<<"\n********************************\n";
    cout << "Min heap: "<<endl;
    min_heap();

    cout<<"\n********************************\n";
    cout << "Max heap: "<<endl;
    max_heap();
    return 0;
}