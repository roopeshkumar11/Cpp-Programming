#include<iostream>
using namespace std;
int main() {
int row,column;

cout<<"enter row and column";
cin>>row>>column;
   int ar[row][column];
   for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
       cin>>ar[i][j];
   }cout<<endl;
   }
       
       

  for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
       cout<<ar[i][j]<<" ";
   }cout<<""<<endl;
  }}