#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"Enter a"<<endl;
    cin>>a;
    
    cout<<"Enter b"<<endl;
    cin>>b;

    if (b==0)
    {
        cout<<"Invalid number"<<endl;
    }

    else
    {
        c = a/b;
        cout<<"your output is "<<c<<endl;
    }

}