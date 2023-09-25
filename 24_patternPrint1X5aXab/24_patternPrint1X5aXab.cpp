#include<iostream>
using namespace std;

int main()
{
    char alpha ='a';

    for (int rows = 1; rows <=5; rows++)
    {
        for (int cols=1;cols<=rows; cols++)
        {
            cout<<alpha<<" ";
        }
        cout<<endl;
        alpha++;
    }
    
    return 0;
}