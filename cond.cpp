// #include<iostream>
// using namespace std;
// int main(){
//     int a;
   
//     cout <<"enter the value of a";
//     cin >>a;

//     if(a>0){
//         cout <<"positive";
//     }
//     else if(a<0){
//         cout<<"negative";

//     }
//     else{
//         cout<<"equal to zero";
//     }

    
// }




#include<iostream>
using namespace std;
int main(){
    int input;
    cout <<"enter the value of a";
    cin>>input;

    if(input<'a' && input>'z'){
        cout <<"lower";
    }
    else if (input>0 && input<9){
        cout<<"number";
    }

}