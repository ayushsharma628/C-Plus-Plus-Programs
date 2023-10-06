#include<iostream>
using namespace std;

void factorial(int num)
{
    int fac =1;
    while (num>0)
    {
        fac*=num;
        num--;
    }
    cout<<"Factorial: "<<endl<<fac;
}

int main()
{
    int num;

    cout<<"Enter The Number: ";
    cin>>num;

    factorial(num);

    return 0;
}