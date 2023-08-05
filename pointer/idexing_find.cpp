// #include<iostream>
// using namespace std;
// int main(){
//     int ar[4]={1,2,3,4};
//     int *ptr =&ar[0];
//     for (int i = 0; i <4; i++)
//     {
//         cout<<*(ptr+i)<<"\n";
//     }
    

    
// }
// without loop


#include<iostream>
using namespace std;
int main(){
    int ar[4]={1,2,3,4};
    int *ptr =&ar[0];
    cout<<*(ptr+0)<<" "<<*(ptr+1)<<" "<<*(ptr+2)<<" "<<*(ptr+3);

    
}