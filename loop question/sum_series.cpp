// n=1-2+3-4...+n

#include<iostream>
using namespace std;
int main(){
    int result=0;
    int i;
    int count;
    cin>>count;
    for ( i = 0; i <=count; i++)
    {
        if (i%2==0)
        {
            result=result-i;
        }
        else{
            result=result+i;
        }
    }
    cout<<result;

}