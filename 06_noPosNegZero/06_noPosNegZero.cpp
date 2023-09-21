#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter The Number: ";
    cin>>num;

    if (num>0)
    {
        cout<<"It is positive.";
    }
    else if (num<0)
    {
        cout<<"It is negative.";
    }
    else
    {
        cout<<"It is zero.";
    }
    
    return 0;
}