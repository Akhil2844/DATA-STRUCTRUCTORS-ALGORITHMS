#include<iostream>
using namespace std;

int score=15;   // global variable

void a(int i)
{
    char ch ='c';  // local variable
    cout<<score<<" in a "<<endl;
    score++;
    cout<<i<<endl;
}

void b(int i)
{
    cout<<score<<" in b "<<endl;
    cout<<i<<endl;
}
int main()
{
    int i=5;
    cout<<score<<" in main "<<endl;
    a(i);
    b(i);

   return 0;
}