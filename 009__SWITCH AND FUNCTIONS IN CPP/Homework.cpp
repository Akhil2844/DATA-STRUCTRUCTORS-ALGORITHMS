#include<iostream>
using namespace std;
int main()
{
    int amount,n100,n50,n20,n1;
    n100=n50=n20=n1=0;
     cout<<"Enter the Amount : "<<endl;
     cin>>amount;

     switch(amount>=100)
     {
        case 1:
        n100=amount/100;
        amount=amount-n100*100;
        break;
     }

      switch(amount>=50)
     {
        case 1:
        n50=amount/50;
        amount=amount-n50*50;
        break;
     }

      switch(amount>=20)
     {
        case 1:
        n20=amount/20;
        amount=amount-n20*20;
        break;
     }

      switch(amount>=1)
     {
        case 1:
        n1=amount/1;
        amount=amount-n1*1;
        break;
     }

     cout<<"Following are the distribution of notes :"<<endl;
     cout<<"Hundred Ruppees notes are following : "<<100 <<" X "<<n100<<endl;
     cout<<"Fifty Ruppees notes are following : "<<50<<" X "<<n100<<endl;
     cout<<"Twenty Ruppees notes are following : "<<20<<" X "<<n100<<endl;
     cout<<"One Ruppees notes are following : "<<1<<" X "<<n100<<endl;
}