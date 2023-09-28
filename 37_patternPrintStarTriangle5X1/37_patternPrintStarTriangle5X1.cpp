#include<iostream>
using namespace std;

int main()
{
    int total_rows;

    cout<<"Enter The Rows: ";
    cin>>total_rows;

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=total_rows;cols>=rows; cols--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}