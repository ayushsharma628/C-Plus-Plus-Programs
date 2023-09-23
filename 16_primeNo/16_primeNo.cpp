#include<iostream>
using namespace std;

int main()
{
    int num,count=0;
    cout<<"Enter The Number: ";
    cin>>num;

    if (num==0)
    {
        cout<<"Enter The Valid Number: ";
    }
        
    else
    {
    for (int i = 1; i < num; i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    }
    if(count<=1)
    {
        cout<<num<<" is prime no.";
    }
    else
    {
        cout<<num<<" is not prime no.";
    }

    return 0;
}