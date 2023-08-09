#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    cout << num << endl;

    // address operator --&

    cout << "Address of an operator is " << &num << endl;

    int *ptr=&num;

    cout<<"Address is : "<<ptr<<endl;

    cout<<"Value at Address is : "<<*ptr<<endl;

    double d=7.933424;
    double *ptr2=&d;

    cout<<"Address is : "<<ptr2<<endl;
    cout<<"Value at Address is : "<<*ptr2<<endl;

    cout<<"Size of integer is : "<<sizeof(num)<<endl;
    cout<<"Size of pointer is : "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer is : "<<sizeof(ptr2)<<endl;

    return 0;
}