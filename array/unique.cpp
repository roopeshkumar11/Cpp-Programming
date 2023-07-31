#include<iostream>
using namespace std;
int main(){
    int a[7]={1,2,2,3,3,4,4};
    for (int i = 0; i < 7; i++)
    { 
        for (int j = i+1; j < 7; j++)
        {
            if (a[i]==a[j])
            {
               a[i]=a[j]=-1;
            }
        
            
        }
    }
   int uni=0;
   for (int i = 0; i < 7; i++)
   {
    if (a[i]>0)
    {
        cout<<a[i]<<endl;
        uni=a[i];
    }
    
   }
    
    
}

