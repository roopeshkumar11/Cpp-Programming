// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,34,6,7,8};
//     cout<<array[0]<<endl;
//     cout<<array[1]<<endl;
//     cout<<array[2]<<endl;
//     cout<<array[3]<<endl;
    

// }
//second metthode

// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,34,6,7,8};
//     int i;
//     int size_array=sizeof(array)/sizeof(array[0]);
//     for ( i = 0; i <size_array; i++)
//     {
        
//      cout<<array[i]<<endl; 
      
//       }  }


//using for each loop
// #include<iostream>
// using namespace std;
// int main(){
//     int array[]={1,2,34,6,7,8};
//     int i;
//     int size_array=sizeof(array)/sizeof(array[0]);
    
//     for(int ele:array)
//     {
        
//      cout<<ele<<endl; 
      
//       }  }
    
   
 
    //using while loop
#include<iostream>
using namespace std;
int main(){
    int array[]={1,2,34,6,7,8};
    int i=0;
    int size_array=sizeof(array)/sizeof(array[0]);
    
    while(i<=size_array)
    {
        
     cout<<array[i]<<endl;
     i++; 
      
      }  }


