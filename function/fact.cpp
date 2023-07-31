#include<iostream>
using namespace std;
int fact(int a){        
    int i,factorial=1;
    for(i=1;i<=a;i++){
        factorial=factorial*i;
        
    }
    return factorial;
}
int main(){
    int b;
    cin>>b;
    cout<<"factorial of is"<<fact(b);

}