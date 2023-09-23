#include<iostream>
using namespace std;

int main()
{
    int num,sum=0;
    cout<<"Enter The Number: ";
    cin>>num;

    for (int i = 0; i <=num; i++)
    {
        sum=sum+i;
    }
    cout<<"Sum Of Given Number: "<<sum;

    return 0;
}