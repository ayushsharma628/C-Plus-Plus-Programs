#include<iostream>
using namespace std;

int main()
{
    int total_rows;

    cout<<"Enter The Rows: ";
    cin>>total_rows;

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=total_rows;cols>=total_rows+1-rows; cols--)
        {
            cout<<cols<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}