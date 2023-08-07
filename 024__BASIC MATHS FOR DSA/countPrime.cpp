#include<iostream>
#include<vector>
using namespace std;

int countNumbers(int n)
{
    int count=0;

    vector<bool> prime(n+1,true);
    
    prime[0]=prime[1]=0;

    for(int i=0;i<n;i++)
    {
        if(prime[i])
        {
            count++;
            for(int j=2*i;j<n;j=j+i)
            {
                prime[j]=0;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;

    cout<<"Number of prime numbers that are strictly less than n are "<<endl<<countNumbers(n);
    return 0;


}