#include<iostream>
using namespace std;

int main()
{
    int count=0;

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=5; cols++)
        {
            count++;
            cout<<count<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}