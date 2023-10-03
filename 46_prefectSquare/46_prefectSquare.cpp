#include<iostream>
using namespace std;

int main()
{
    int num,pre_num,i;
    cout<<"Enter The Number: ";
    cin>>num;

    for (i = 1; i<=num; i++)
    {
        pre_num =i*i;
        if(pre_num==num)
        {
            cout<<num<<" is prefect Of "<<i;
            break;
        }
    }
    if(i>num)
    {
        cout<<"It is not a prefect square.";
    }
    return 0;
}