#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter The Rows: ";
    cin>>num;

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=5; cols++)
        {
            cout<<5-cols+1<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}