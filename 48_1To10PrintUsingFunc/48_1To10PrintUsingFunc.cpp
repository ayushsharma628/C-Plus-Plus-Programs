#include<iostream>
using namespace std;

void printNo(int num)
{
    for (int i = 1; i <=num; i++)
    {
        cout<<i<<" ";
    }
    
}

int main()
{
    int num;
    cout<<"Enter The Number: ";
    cin>>num;

    printNo(num);
}