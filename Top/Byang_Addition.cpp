#include<iostream>
using namespace std;
int main()
{
    int a,b,t1,t2,l=0;
    cin>>a>>b;

    while(a!=0)
    {
        t1=a%10;
        t2=b%10;

        if(t1+t2>9)
        {
            l=1;
            break;
        }
    }
    if(l==1)cout<<"Yes";
    else cout<<"No";
}
