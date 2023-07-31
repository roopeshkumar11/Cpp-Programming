#include<iostream>
using namespace std;
int main(){
    int a[5]={3,4,6,7,1};
    int sum=0;
    int pair=0;
    for (int i = 0; i < 5; i++)
    {
        for ( int j = i+1; j < 5; j++)
        {
           if (a[i]+a[j]==7)
           {
            pair++;
           }
           
        }
        
    }
    cout<<pair;
    
}