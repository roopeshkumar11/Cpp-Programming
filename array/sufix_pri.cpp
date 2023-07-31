#include<iostream>
#include<vector>
using namespace std;

bool checkprefi_suff_sum(vector<int> &v){
    int total_sum=0;
    for (int i = 0; i <v.size(); i++)
    {
        total_sum=total_sum+v[i];
    }
    int pre_sum=0;
    for (int i = 0; i < v.size(); i++)
    {
        pre_sum=pre_sum+v[i];
        int suff_sum=total_sum-pre_sum;
        if (suff_sum==pre_sum)
        {
             return true;     
        }
        
    }
    return false;
    cout<<endl;
    
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int  i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
         cout<<ele;
    }
    
 cout<<checkprefi_suff_sum(v)<<endl;

}