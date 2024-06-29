//vectors is a container that is dynamic in nature meanwhile arrays are static

#include<bits/stdc++.h>
using namespace std;

void this_vector(){
  // Declaring a vector 

  vector<int> v;
  v.push_back(1);     //{1}
  v.emplace_back(2);  //{1,2}

  vector<pair<int,int>>vec;
  vec.push_back({3,4});  //{{3,4}}
  vec.emplace_back(5,6); //{{3,4},{5,6}}
  
  vector<int> v1(5,100); //{100,100,100,100,100}
  vector<int> v2(5);     //{0,0,0,0,0}
  vector<int> v3(5,20);  //{20,20,20,20,20}
  vector<int> v4(v3);    // copying vector


  //Accessing elements of a vectors directly 

  cout << "v[0] : "<< v[0] << " " << v.at(0) << endl; //{1}
  cout << "v[1] : "<< v[1] << " " << v.at(1) << endl; //{2}

  cout << "vec[0].first : " << vec[0].first << endl;   //{3}
  cout << "vec[0].second: " << vec[0].second << endl;  //{4}
  cout << "vec[1].first: " << vec[1].first << endl;    //{5}
  cout << "vec[1].second: " << vec[1].second << endl;  //{6}

  cout << "v1[0] : "<< v1[0] << endl; //{100}
  cout << "v1[1] : "<< v1[1] << endl; //{100}
  cout << "v3[2] : "<< v1[2] << endl; //{100}
  cout << "v4[3] : "<< v1[3] << endl; //{100}
  cout << "v5[4] : "<< v1[4] << endl; //{100}
  
  cout << "v3[0] : "<< v3[0] << endl; //{20}
  cout << "v3[1] : "<< v3[1] << endl; //{20}
  cout << "v3[2] : "<< v3[2] << endl; //{20}
  cout << "v3[3] : "<< v3[3] << endl; //{20}
  cout << "v5[4] : "<< v3[4] << endl; //{20}

  // using iterator

  // way 1

  vector<int>::iterator it = v.begin();

  cout << *(it) << " ";
  it++;
  cout << *(it) << " ";
  it++;
  cout << *(it) << " " << endl; // garbage value

  cout << "v.back() : "<< v.back()<<endl;



  vector<int>::iterator it1 = v1.end(); 
  // vector<int>::iterator it2 = v1.rend(); 
  // vector<int>::iterator it3 = v1.rbegin(); 


  // way 2

  auto count = 1;
  for(vector<int>::iterator it = v1.begin(); it != v1.end(); it++){
    cout<< "v1 ["<<count<<"] :" << *(it) << endl;
    count++;
  }

  //way 3

  count = 1;
  for(auto it = v4.begin(); it != v4.end(); it++){
    cout<< "v4 ["<<count<<"] :" << *(it) << endl;
    count++;
  }

  // way 4 using foreach loop

  for(auto it : v4){
    cout << it << " ";
  }


  // erasing element from vector 
  v.erase(v.begin()); // this dynamically delete and rearrange elements 
  cout << "\nv.erase(v.begin()) now v[0] is : " << v[0] << endl;

  // erasing full vector leaving last element 
   cout<<"\nErasing vector v4 all elements leaving only last element i.e.: ";
   v4.erase(v4.begin(),v4.end()-1);
   for(auto it:v4){
    cout <<it << " "; 
   }
   cout << endl;

   // or use v.clear();
     cout << "\n\nBefore v1.clear() : \n" ;
     for(auto it : v1){
      cout << it << " ";
     }
    cout <<"\nChecking by v1.empty(): "<< v1.empty();

     cout << "\n\nAfter v1.clear() : "; // 0 means not empty
     v1.clear();
     for(auto it : v1){
      cout << it << " ";
     }
    cout <<"\nChecking by v1.empty(): "; // 1 means empty

      if(v1.empty()) 
      { 
       cout<<"empty" ;
      }
      else{ 
        cout<<"notempty";
        }

  //Inserting in a vector
  cout<<"\nInserting in a vector : \n";
  vector<int>v5(2,100); // {100,100}
  for(auto it:v5){
    cout << it << " ";
  }
  cout << endl;

  // Insert at begining
  cout<<"\n\nInserting at beginning:\n";
  v5.insert(v5.begin(),200); //{200,100,100}
  for(auto it:v5){
    cout << it << " ";
  }
  cout << endl;

  //insert in between of a vector
  cout <<"\n\nInsert in between of a vector:\n";
  v5.insert(v5.begin()+1,2,900);
  for(auto it:v5){
    cout << it << " ";
  }
  cout <<"\n\nInsert in end of a vector:\n";
  v5.insert(v5.end(),5000);
  for(auto it:v5){
    cout << it << " ";
  }
  cout <<"\n\nCopy pasting of entire vector:\n";
  vector<int>copy(2,600);

  v5.insert(v5.begin(),copy.begin(),copy.end());
  for(auto it:v5){
    cout << it << " ";
  }


  // get size of a vector v5 {600 600 200 900 900 100 100 5000};
  cout <<"\n\nSize of vector : v5.size() : " << v5.size() <<endl; //8

  //v5_pop
  v5.pop_back();// 5000
  cout << endl;
  for(auto it:v5){
    cout << it << " ";
  }

  v5.pop_back();// 100
  cout << endl;
  for(auto it:v5){
    cout << it << " ";
  }
  cout << endl;
  // swap the vectors
  vector<int> v6 = {30,40,50,90};
  vector<int> v7 = {60,70,80};
  v6.swap(v7);

  for(auto it : v6){
    cout << it << " ";
  } 
  cout << endl;
  for(auto it : v7){
    cout << it << " ";
  }




}


int main(){

    this_vector();

    return 0;
}