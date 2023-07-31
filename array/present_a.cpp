#include<iostream>
using namespace std;
int main(){
   int a[7]={1,1,1,0,1,0,1};
   for (int i = 0; i < 7; i++)
   {
    for (int j = i+1; j < 7; j++)
    {
        if (a[j]<a[i])

        {
            i=j;
        }
     
    }
   
    int temp=a[i];
    a[i]=a[i];
    a[i]=temp;
    
    
   }
     for (int i = 0; i <7; i++)
    {
        cout<<a[i]<<" ";
    }
   
}




// #include<iostream>
// using namespace std;

// int main() {
//     int a[7] = {1, 1, 1, 0, 1, 0, 1};

//     for (int i = 0; i < 7 - 1; i++) {
//         // Find the minimum element in the unsorted part
//         int minIndex = i;
//         for (int j = i + 1; j < 7; j++) {
//             if (a[j] < a[minIndex]) {
//                 minIndex = j;
//             }
//         }

//         // Swap the found minimum element with the first unsorted element
//         int temp = a[i];
//         a[i] = a[minIndex];
//         a[minIndex] = temp;
//     }

//     for (int i = 0; i < 7; i++) {
//         cout << a[i] << " ";
//     }
    
//     return 0;
// }

