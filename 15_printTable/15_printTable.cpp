#include<iostream>
using namespace std;

int main()
{
    int table;
    cout<<"Enter The Number: ";
    cin>>table;

    for (int i = 0; i <=10; i++)
    {
        cout<<table<<" * "<<i<<" = "<<table*i<<endl;   
    }

    return 0;
}