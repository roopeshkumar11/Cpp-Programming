#include<iostream>
using namespace std;
int add(int a,int b=0,int c=9){ // b and c is default parameter
                                 // a ,b , cis formal parameter
    return a+b+c;
}
int main(){
    int p=3;
    cout<<add(p); //p is actual parameter


}
