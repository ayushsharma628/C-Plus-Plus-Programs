#include<iostream>
using namespace std;

int main()
{
    int rows,columns,num;
    cout<<"Enter The Number: ";
    cin>>num;
    cout<<"Enter The Rows & Columns: ";
    cin>>rows>>columns;

    for (int i = 0; i < rows; i++)
    {
        for (int j=0;j<columns;j++)
        {
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}