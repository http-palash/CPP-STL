#include<bits/stdc++.h>
using namespace std;

void display(deque<int> deq){
    
    for(auto i : deq){
        cout << "\t"<< i << " ";
    }
    cout << endl;

}
void this_deque(){
    deque<int>deq;

    cout << "deq.push_back(1) : ";
    deq.push_back(1);       //{1}
    display(deq);

    cout << "deq.emplace_back(2): ";
    deq.emplace_back(2);    //{1 2}
    display(deq);
    
    cout  << "deq.push_front(3):";
    deq.push_front(3);      //{3 1 2}
    display(deq);
    
    cout << "deq.emplace_front(4): ";
    deq.emplace_front(4);   //{4 3 1 2}
    display(deq);

    cout << "deq.pop_back(): ";
    deq.pop_back(); //{4 3 1}
    display(deq);
    
    cout << "deq.pop_front(): ";
    deq.pop_front(); //{3 1}
    display(deq);

    cout << endl;

    cout << "deq.back() : "<< deq.back() << endl;
    // display(deq);

    cout << "deq.front() :"<<deq.front() << endl;
    // display(deq);
    


}
int main(){
    this_deque();
    return 0;
}