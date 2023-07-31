// call by value
// #include<iostream>
// using namespace std;

//  int change_value(int z){
//     z=100;
//  }
// int main(){
//     int a=5;
//     change_value(a);
//     cout<<a;
// }



//call by refreance
#include<iostream>
using namespace std;

 int change_value(int &z){
    z=100;
 }
int main(){
    int a=5;
    change_value(a);
    cout<<a;
    cout<<endl<<&a;
    
}
