#include<iostream>
using namespace std;

int main()
{
    int terms,n1=0,n2=1,temp=0;
    cout<<"Enter The Number Of Terms: ";
    cin>>terms;

    cout<<"Fabonacci Series: "<<endl;
    if(terms==0)
    {
        cout<<"Enter Valid Number.";
    }
    else if (terms==1)
    {
        cout<<n1;
    }
    else if (terms==2)
    {
        cout<<n1<<endl<<n2;
    }
    else
    {
        cout<<n1<<endl<<n2<<endl;
        for (int i = 3; i <=terms; i++)
        {
            temp = n1+n2;
            n1=n2;
            n2=temp;
            cout<<temp<<endl;
        }
        
    }
    
    return 0;
}