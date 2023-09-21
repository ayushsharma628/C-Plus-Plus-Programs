#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter The Number: ";
    cin>>num;

    if (num%2==0)
    {
        cout<<"It is even.";
    }
    else
    {
        cout<<"It is odd.";
    }
    return 0;
}