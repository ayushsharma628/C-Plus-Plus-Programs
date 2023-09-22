#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter The Number: ";
    cin>>num;

    if (num%3==0 && num%5==0)
    {
        cout<<"It is prefect";
    }
    else
    {
        cout<<"It is not prefect";
    }

    return 0;
    
}