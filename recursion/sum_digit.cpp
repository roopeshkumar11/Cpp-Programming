#include<iostream>
using namespace std;

int sum(int n){
    if (0<n and n<9)
    {
       return n;
    }
    else{
        return sum(n/10)+sum(n%10);
    }
    
}
int main(){
    int a;
    cout<<"enter number"<<"\n";
    cin>>a;

    cout<<"sum of digit"<<" "<<sum(a);
}