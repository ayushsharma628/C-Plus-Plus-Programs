#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a;
    cout<<"Enter The Number: ";
    cin>>a;
    cout<<"Cube Of No.: "<<a*a*a<<endl;
    cout<<"Using Pow Function:"<<endl;
    cout<<"Cube Of No.: "<<pow(a,3);
    
    return 0;
}