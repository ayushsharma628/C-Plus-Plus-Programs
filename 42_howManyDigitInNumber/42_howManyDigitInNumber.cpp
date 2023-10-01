#include<iostream>
using namespace std;

int main()
{
    int num,count=0;
    cout<<"Enter The Number: ";
    cin>>num;

    while(num>0)
    {
        count++;
        num/=10;
    }
    cout<<count<<" Digits In This Number";

    return 0;
}