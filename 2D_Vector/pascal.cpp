#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pascaltriangle(int n){
    vector<vector<int>> pascal(n);
    for (int i = 0; i < n; i++)
    {
        int ith_vector = pascal[i];
    
        ith_vector.resize(i+1);
    }
    
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>> ans;
    ans=pascaltriangle(n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
           cout<<ans[i][j]<<" ";
        }cout<<endl;
        
    }
    
}