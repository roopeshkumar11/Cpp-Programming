#include<iostream>
using namespace std;
int main(){
    int a;
    int i=1,sum=0;
    cout <<"enter number";
    cin>>a; 
    while (i<=a)
    {
        sum=sum+i;
        cout<<sum;
        i=i+1;
    }
    
}