#include<iostream>
using namespace std;

int fabonacci(int num)
{
    int n1 = 0, n2 = 1;
    cout<<" Fabonacci Series: "<<endl;
        for(int i = 1 ; i <=num;i++)
        {
            if(i==1)
            {
                cout<<n1<<endl;
            }
            else if (i==2)
            {
                cout<<n2<<endl;
            }
            else
            {
                int fab = n1+n2;
                cout<<fab<<endl;
                n1 = n2;
                n2 = fab;
            }
        }
    }

int primeNo(int num)
{
    int count=0;
    cout<<" Number is a prime or not: "<<endl;
    for (int i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count<=2)
    {
        cout<<num<<" is a prime number."<<endl;
    }
    else
    {
        cout<<num<<" is not a prime number."<<endl;
    }
}

int evenOdd(int num)
{
    cout<<"Number is even or odd: "<<endl;
    if (num%2==0)
    {
        cout<<" It is a even number."<<endl;
    }
    else
    {
        cout<<"It is odd number."<<endl;
    }
}

int posNegNumber(int num)
{
    cout<<"Number Is Neagtive, Positive Or Zero: "<<endl;
    if(num<0)
    {
        cout<<"It is negative number."<<endl;
    }
    else if (num>0)
    {
        cout<<"It is positive number."<<endl;
    }
    else
    {
        cout<<"It is zero."<<endl;
    }
    
}
    
int main()
{
    int num;
    cout<<"Enter The Number: ";
    cin>>num;
    fabonacci(num);
    primeNo(num);
    evenOdd(num);
    posNegNumber(num);

    return 0;
}