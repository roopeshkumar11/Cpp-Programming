#include<iostream>
using namespace std;
int main(){
    int x=90;
    int y=78;
    int *ptr=&x;
    cout<<"adress of x"<<ptr<<"\n";
    cout<<"values of x"<<*ptr<<"\n";
    x=23;
    cout<<"value of x"<<x<<"\n";
    cout<<"update value"<<*ptr<<"\n";
    cout<<"adress of x" <<" "<<ptr<<"\n";


// update value with pointer
*ptr=50;
cout<<"new values of x"<<" "<<x<<"\n";
cout<<"new value of pointer by ptr"<<*ptr<<"\n";
cout<<"adress of x" <<" "<<ptr<<"\n";

//take another for *pointer
int value=*ptr;

}