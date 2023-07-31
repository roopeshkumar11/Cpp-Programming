#include<iostream>
using namespace std;
int sum_irr(int x , int y){
    int sum=0;
    for (int  i = x; i <=y; i++)
    {
       sum=sum+i;
    }
    cout<<sum<<endl;}

   int sum_s(int x ,int y){
     int n=(y-x+1);
     int  a=x;
     int result=(n*(2*a+(n-1)*1))/2;
    return result;

        
}
int main(){
    sum_irr(2,6);
    cout<<sum_s(2,6);
}