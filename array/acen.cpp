#include<iostream>
using namespace std;
int main(){
    
    int arr[6]={4,9,6,8,1,3};
    // bool sort=true;
    for(int i=0;i<6;i++){
        if(arr[i]<arr[i+1]){
        arr[i]=arr[i+1];}
      cout<<arr[i];    
    }
    
   
//  wrong
}