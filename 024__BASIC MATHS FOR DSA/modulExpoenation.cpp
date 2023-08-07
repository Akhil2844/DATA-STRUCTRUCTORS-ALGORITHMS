#include<iostream>
using namespace std;

int modulerExponenation(int x,int n,int m)
{
  int res=1;

  while(n>0)
  {
    if(n&1)
    {
        //odd
        res=(1LL*(res)*(x)%m)%m;
    }
    x=(1LL*(x)%m*(x)%m)%m;
    n=n>>1;

  }
  return res;
}

int main()
{
    int x,n,m;
    cout<<"Enter the number "<<endl;
    cin>>x;

    cout<<"Enter the power "<<endl;
    cin>>n;

    cout<<"Enter the module "<<endl;
    cin>>m;

    int ans=modulerExponenation(x,n,n);

    cout<<"Moduler Exponentaion of x is : "<<ans<<endl;

    return 0;
}