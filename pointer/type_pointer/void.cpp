#include<iostream>
using namespace std;
int main(){
    float f=10.2;
    int x=2;
    void *ptr=&f;
    ptr=&x;
    cout<<ptr<<" "<<ptr;
}