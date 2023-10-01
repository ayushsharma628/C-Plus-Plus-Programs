#include<iostream>
using namespace std;

int main()
{
    int num,bin=0,mul=1;
    cout<<"Enter The Binary Number: ";
    cin>>num;

    while (num>0)
    {
        int rem =num%10;
        num/=10;
        bin = bin+rem*mul;
        mul*=2;
    }
    cout<<"Decimal Is: "<<bin;
    
    return 0;
}