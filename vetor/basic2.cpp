#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for (int i = 0; i <5; i++)
    {
        int elment;
        cin>>elment;
        v.push_back(elment);

    }
    

    for (int i = 0; i < 5; i++)
    {
        cout<<v[i]<<" ";
       
    }
    cout<<endl;
 v.insert(v.begin()+2,6);
//   for each loop using  
  for(int ele:v){
    cout<<ele<<" ";

  } 
  cout<<endl;
v.erase(v.end()-2);   

int i=0;
while (i<v.size())
{
    cout<<v[i++]<<" ";
}

 
    
}