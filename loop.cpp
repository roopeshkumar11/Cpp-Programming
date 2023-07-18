// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int i=1;
//     cout <<"enter number";
//     cin>>a; 
//     while (i<=a)
//     {
        
//         cout<<i;
//         i=i+1;
//     }
    
// }

// sum of series
 

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     int i=1,sum=0;
//     cout <<"enter number";
//     cin>>a; 
//     while (i<=a)
//     {
//         sum=sum+i;
//         cout<<sum;
//         // i=i+1;
//     }
    
// }


//using for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n;
//     cout<<"enter the vlue of n";
//     cin>>n;
//     for(i=0;i<=n;i++){
//         cout<<i<<endl;
//     }

// }



//  prime number

// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     int n;
//     cout<<"enter the vlue of n";
//     cin>>n;
//     for(i=2;i<=n;i++){
//         if(i%n==0){
//             cout<<"not prime";
            
           

//         }
//         else{
//             cout<<"prime number";
//         }
      
       
//     }

// }


// display prime number

#include<iostream>
using namespace std;
int main(){
    int i;
    int n;
    cout<<"enter number";
    cin>>n;
    for (i = 1; i < n; i++)
    {
        if(i%2==0){
            cout<<"even"<<i<<endl;
        }
    }
    
}
