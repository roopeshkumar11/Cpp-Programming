#include <iostream>
using namespace std;
int main() {

    int row,column; 
    cout<<"enter row and column";
    cin>>row>>column;
   int ar[row][column];
   for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
       cin>>ar[i][j];
   }
   }
   cout<<"orginal matrix"<<endl;
    for(int i=0;i<row;i++){
 for(int j=0;j<column;j++){
      cout<<ar[i][j]<<" ";
   } cout<<endl;
   }

int transpose[column][row];
for (int i = 0; i < column; i++)
{
  for (int j = 0; j < row; j++)
  {
    
  transpose[i][j]=ar[j][i];
}

}
cout<<"transpose"<<endl;
for (int i = 0; i < row; i++)
{
  for (int j = 0; j < column; j++)
  {
    
  cout<<transpose[i][j]<<" ";
}cout<<endl;
}
   
}