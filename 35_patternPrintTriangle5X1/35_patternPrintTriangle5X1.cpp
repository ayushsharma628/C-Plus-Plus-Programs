#include<iostream>
using namespace std;

int main()
{
    int total_rows;

    cout<<"Enter The Rows: ";
    cin>>total_rows;

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=rows;cols>=1; cols--)
        {
            cout<<cols<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}