// #include<iostream>
// using namespace std;
// int po(int p,int q){
//     if (q==0)
//       return 1;
    
// return p * po(p,q-1);}

    

// int main(){
//     cout<<po(2,4);

// }



// another way
#include<iostream>
using namespace std;
int po(int p,int q){
    if (q==0)
      return 1;
    
    if (q%2==0)
{
  int result=po(p,q/2);
  return result*result;
}
     else{
    int result=po(p,(q-1)/2);
      return p*result*result;
   }}

    

int main(){
    cout<<po(2,4);

}