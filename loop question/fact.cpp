#include<iostream>
using namespace std;
int main(){
    
    int count;

    cin>>count;
    int i,fact=1;
    for ( i = 1; i <= count; i++)
    {
        fact=fact*i;
        cout<<fact<<endl;
    }
    
}