// List is exactly similar to vector it is also dynamic in nature nut the difference is it facilitates
//  from operations as well

// List in STL is implemented as Doubly Link List. The elements from List cannot be directly accessed.

#include<bits/stdc++.h>
using namespace std;


void display(list<int> mylist){
    for(auto it : mylist){
        cout << it << " ";
    }
}
void this_list(){
    list<int>ls;

    ls.push_back(2);  //{2}
    ls.emplace_back(4); //{2,4}
    // To demonstrate accessing elements by index:
    std::cout << "Element at index 0: " << ls.front() << std::endl; // Prints 5
    // std::cout << "Element at index 1: " << ls.at(1) << std::endl; // at() not works in list 
    std::cout << "Element at index 2: " << ls.back() << std::endl; // Prints 4 << "Element at index 1: " << ls.at(1) << std::endl; // Prints 4

    cout << "\nls.push_front(5) : "; // {5,2,4}
    ls.push_front(5); // {5,2,4}
    // insert function in vector is costly in vector singly linklist dynamic array  
    // meanwhile doubly linklist in maintained in list
    display(ls);

    cout << "\n2 x ls.emplace_front() : ";
    ls.emplace_front(); //{0,5,2,4}
    ls.emplace_front(); //{0,0,5,2,4}
    display(ls);
    
    cout << endl;
    
    cout << "ls.pop_back(): ";
    ls.pop_back();//{0,0,5,2}
    display(ls);

    //begin, end, rbegin, rend, clear, insert, size, swap
     
    // for(list<int>::it = ls.begin(); it!= ls.end(); it++){

    // }
    cout << endl << endl;
    std::right;
    cout << "ls.front() : " << setw(10) <<ls.front() << endl;
    cout << "ls.back()  : " << setw(10) <<ls.back()  << endl;
    cout << "ls.size()  : " << setw(10) <<ls.size()  << endl;

    cout << endl;    
    list<int> ls1 = {7,8,9};

    cout << "List ls before swap : ";
    display(ls);
    
    cout << endl;
    cout << "List ls1 before swap : ";
    display(ls1);

    cout<< endl;

    ls1.swap(ls);

    cout<< endl;
    cout << "List ls after swap : ";
    display(ls);

    cout << endl;
    cout << "List ls1 after swap : ";
    display(ls1);
    
    cout << "\nlist size is : "<<ls.size();
    // cout << endl;
    // for(auto it : ls){
    //     cout << it <<" "; 
    // }

    cout << endl;

}
int main(){
    this_list();
    return 0;
}