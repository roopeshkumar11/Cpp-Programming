#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p1=&x;
    cout<<p1<<" "<<(p1+1)<<"\n";
    cout<<(p1-1)<<"\n";
    cout<<(p1-2)<<"\n";
    cout<<sizeof(x);
    cout<<(p1+2)<<"\n";
}