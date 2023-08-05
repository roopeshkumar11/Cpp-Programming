// #include<iostream>
// using namespace std;
// int main()
// {
//     int ar[2]={3,2};
//     int *p=&ar[0];
//     cout<<p<<" "<<*p<<"\n";
//     cout<<*p++<<"\n";
//     cout<<(*p)++<<"\n";

//     cout<<ar[0]<<" "<<ar[1]<<"\n";
//     cout<<p<<" "<<*p<<"\n";

// }



#include<iostream>
using namespace std;
int main()
{
    int ar[2]={3,2};
    int *p=&ar[0];
    cout<<++*p<<"\n";
    cout<<ar[0]<<" "<<ar[1]<<"\n";
     cout<<ar<<" "<<p<<"\n";
     cout<<*ar<<" "<<p;

}