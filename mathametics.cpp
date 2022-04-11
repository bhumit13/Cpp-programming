#include<iostream>
using namespace std;

    int add(int,int);
    int sub(int,int);
    int mult(int,int);
    int divi(int,int);

    int main()
    {
        int a, b, add, sub, mult, divi, c, d, e, f;

        cout<<"Enter a"<<endl;
        cin>>a;
        cout<<"Enter b"<<endl;
        cin>>b;

        add (a,b);
        sub (a,b);
        mult (a,b);
        divi (a,b);

        cout<<"addition is"<<c<<endl;
        cout<<"substration is"<<d<<endl;
        cout<<"multiplication is"<<e<<endl;
        cout<<"division is"<<f<<endl;

        return 0;
    }

    int c(int a, int b)
    {
        int c;
        c=a+b;

        return c;
    }
    
    int d(int a, int b)
    {
        int d;
        d=a-b;

        return d;
    }

    int e(int a, int b)
    {
        int e;
        e=a*b;

        return e;
    }

    int f(int a, int b)
    {
        int f;
        f=a/b;

        return f;
    }