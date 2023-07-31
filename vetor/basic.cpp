#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for (int i=0;i<5;i++){
    v.push_back(i);
    cout<< "size :"<<v.size()<<endl;
    cout<<"capacity :"<<v.capacity()<<endl;
    }
// v.pop_back();
//      cout<< "size :"<<v.size()<<endl;
//     cout<<"capacity :"<<v.capacity()<<endl;

// v.clear();
//      cout<< "size :"<<v.size()<<endl;
//     cout<<"capacity :"<<v.capacity()<<endl; 

// v.resize(9);
//      cout<< "size :"<<v.size()<<endl;
//     cout<<"capacity :"<<v.capacity()<<endl;


v.begin();
     cout<< "size :"<<v.size()<<endl;
    cout<<"capacity :"<<v.capacity()<<endl;
   } 
    
    
    

