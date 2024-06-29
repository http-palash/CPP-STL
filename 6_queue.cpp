#include<bits/stdc++.h>
using namespace std;


void display(queue<int> q){
   queue<int> temp;
   temp = q;
   cout << "\nQueue is : "<<endl;
   while(temp.empty()!=1){
        cout << temp.front() << " ";
        temp.pop();
   }
   cout << endl;
}

// void pop_q(queue<int> q){
//     cout << "\nPop first element: ",q.front();
//     q.pop();
// }

void this_queue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    display(q);

    q.back()  += 5;
    display(q);
    
    cout<<"\nFront is : "<< q.front()<<endl;
    cout<<"Back is  : "<<q.back()<<endl;
    cout <<"\nq.pop() : " << endl;
    q.pop();
    display(q);
    
}



int main(){
    this_queue();
    return 0;
}