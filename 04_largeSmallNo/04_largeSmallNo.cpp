#include<iostream>
using namespace std;

int main()
{
    int first_num, second_num;
    cout<<"Enter The First Number: ";
    cin>>first_num;
    cout<<"Enter The Second Number: ";
    cin>>second_num;

    if (first_num>second_num)
    {
        cout<<"First Number is greater than second number.";
    }
    else
    {
        cout<<"Second number is greater than first number.";
    }
    
    return 0; 
}