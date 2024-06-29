// In stack everyhting happens in constant time i.e time complexity is O(1)

#include<bits/stdc++.h>
using namespace std;

void display(string str,stack<int> stackref){
    // for(auto it = st.top(); it!= st.empty(); st.top()-- && it--){
    //     cout << it << endl;
    // }
    stack<int> temp;
    temp = stackref;
    cout <<"\nDisplaying.."<<str<< endl;
    while(temp.empty()!=1){
        cout << temp.top() << endl;
        temp.pop();
    }
    // while(temp.top()){
    //     cout << temp.top() << endl;
    //     temp.pop();
    // }
    // while(temp.top()!= temp.empty()){ X not recommended 
    //     cout << temp.top() << endl;
    //     temp.pop();
    // }
}

void this_stack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    display("stack 1 : ",st);

    cout << endl;

    cout << "st.top(): "<< st.top() << endl; 
    cout << "st.size(): "<< st.size() << endl; 
    cout << "st.empty: "<< st.empty() << endl; 

    stack<int>st2;
    for(int i = 5; i<=10; i++){
        // cout <<"Pushing in st2["<<i<<"] element : "<< i;
        st2.push(i);
    }

    cout<<"\nBefore swapping : ";
    display("Stack 1:",st);
    display("Stack 2:",st2);

    st.swap(st2);

    cout<<"\nAfter swapping : ";
    display("Stack 1:",st);
    display("Stack 2:",st2);
}

int main(){
    this_stack();
    return 0;
}