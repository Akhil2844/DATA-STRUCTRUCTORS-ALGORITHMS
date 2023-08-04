#include <iostream>
#include <algorithm>
using namespace std;
void reversestring(char arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start++], arr[end--]);
    }
}

int getLength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

int main()
{
    char name[20];

    cout << "Enter your name : " << endl;
    cin >> name;

    cout << "Your Name is : " << name << endl;

    cout << "Length : " << getLength(name) << endl;

    cout << "Reverse Array is : ";
    reversestring(name, getLength(name));
    cout<<name<<endl;
    return 0;
}
