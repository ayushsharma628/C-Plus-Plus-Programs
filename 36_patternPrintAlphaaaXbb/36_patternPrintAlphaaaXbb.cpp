#include<iostream>
using namespace std;

int main()
{
    int total_rows;

    cout<<"Enter The Rows: ";
    cin>>total_rows;

    for (int rows = 1; rows <=total_rows; rows++)
    {
        char name = 'a'+rows-1;

        for (int cols=1;cols<=rows; cols++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}