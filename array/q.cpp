#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int a[6]={1,2,3,4,5,6};
    for(int i=0;i<6;i=i+1){
        if(i%2==0)
        {
            sum=sum+a[i];
        }
        else{
            sum=sum-a[i];
        }
        
   
   
}
cout<<sum;
}
