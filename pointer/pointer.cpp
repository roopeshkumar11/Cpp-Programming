#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *ptr=&x;
    cout<<"address of x"<<" "<<ptr<<"\n ";
    cout<<"values of x"<<" "<<*ptr;
}