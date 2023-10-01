#include<iostream>
using namespace std;

int main()
{
    int num,rev=0;
    cout<<"Enter The Number: ";
    cin>>num;

    while(num>0)
    {
        int digit = num%10;
        rev = rev*10+digit;
        num/=10;
    }
    cout<<"Reverse Number Is: "<<rev;

    return 0;
}