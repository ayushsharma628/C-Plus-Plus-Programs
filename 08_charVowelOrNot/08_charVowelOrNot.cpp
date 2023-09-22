#include<iostream>
using namespace std;

int main()
{
    char alpha;
    cout<<"Enter The Character: ";
    cin>>alpha;

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        cout<<alpha<<" is vowel.";
    }
    else
    {
        cout<<alpha<<" is not vowel.";
    }

    return 0;
}