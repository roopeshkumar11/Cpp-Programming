#include<iostream>
using namespace std;
int main(){
    int aray[]={1,2,3,4,5};
    cout<<sizeof(aray)<<endl;
    cout<<"number of el"<<sizeof(aray)/sizeof(aray[0]);
}