#include<iostream>
using namespace std;

int main()
{
    int first_num, second_num, third_num;
    cout<<"Enter The First Number: ";
    cin>>first_num;
    cout<<"Enter The Second Number: ";
    cin>>second_num;
    cout<<"Enter The Second Number: ";
    cin>>third_num;

    if (first_num>second_num && first_num>third_num)
    {
        cout<<"First Number is greater than second number and Third Number.";
    }
    else if (second_num>first_num && second_num>third_num)
    {
        cout<<"Second number is greater than first number and third number.";
    }
    else
    {
        cout<<"Third number is greater than first number and second number.";
    }
    
    return 0; 
}