#include<iostream>
using namespace std;

int main()
{
    int total_rows;

    cout<<"Enter The Rows: ";
    cin>>total_rows;

    for (int rows = 1; rows <=total_rows; rows++)
    {
        for (int cols=1;cols<=rows-1; cols++)
        {
            cout<<" ";
        }
        for (int cols = rows; cols<=total_rows; cols++)
        {
            cout<<"*";
        }
        for (int cols = rows; cols<total_rows; cols++)
        {
            cout<<"*";
        }       
        cout<<endl;
    }
    
    return 0;
}