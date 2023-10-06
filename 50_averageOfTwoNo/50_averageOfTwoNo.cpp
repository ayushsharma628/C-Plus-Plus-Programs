#include<iostream>
using namespace std;

void average(int num1, int num2)
{
    int avg = (num1+num2)/2;
    cout<<"Average: "<<avg;
}

int main()
{
    int num1,num2;

    cout<<"Enter The Number 1: ";
    cin>>num1;

    cout<<"Enter The Number 2: ";
    cin>>num2;

    average(num1,num2);

    return 0;
}