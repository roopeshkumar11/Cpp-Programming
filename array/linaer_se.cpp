#include<iostream>
using namespace std;
int main(){
    int i,n;
     cout<<"which number search";
    cin>>n;
   
    int array[6]={1,2,3,4,5,6};
    
    
    for(i=0;i<6;i++){
        if(array[i]==n){
            cout<<"number found";
            break;
        }
cout<<"number not found";        
    }


}