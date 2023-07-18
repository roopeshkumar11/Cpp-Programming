// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<i;
//             j=j+1;

//         }
//         cout <<endl;
//   i=i+1;
//     }
   
// }


// #include<iostream>
// using namespace std;
// int main(){
//    int n=5;
//    int i=1;
//    while (i<=n)
//    {
//     int j=1;
//     while(n<=j){
//         cout<<"*";
//         j=j+1;
//     }
//     cout<<endl;
//      cout <<"*";
//     i=i+1;
//    }

   
//     }


// hollow rectangle

#include<iostream>
using namespace std;
int main(){
    int i,j;
    for (i=1;i<=5;i++){
       
         for ( j= 1;j <=6; j++)
        {
        if(i==1||j==1||i==5||j==6){
            cout<<"*";
         }
         else{
            cout<<" ";
         }
            
        }
     cout<<endl;   
    }
}

   
