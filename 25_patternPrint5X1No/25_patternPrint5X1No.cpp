#include<iostream>
using namespace std;

int main()
{

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=rows-1; cols++)
        {
            cout<<" ";
        }
        for (int cols = rows; cols<=5; cols++)
        {
            cout<<" "<<cols;
        }
        
        cout<<endl;
    }
    
    return 0;
}