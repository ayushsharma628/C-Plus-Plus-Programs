#include<iostream>
using namespace std;

int main()
{
    int num,bin=0,mul=1;
    cout<<"Enter The Number: ";
    cin>>num;

    while(num>0)
    {
        int rem = num%2;
        num/=2;
        bin = bin+rem*mul;
        mul*=10;
    }
    cout<<"Binary Is: "<<bin;
    
    return 0;
}