#include<iostream>
using namespace std;

// f(x) = x^2 + 2

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    //cout<<"hello world"<<endl;
    //cout<<"new line"<<endl;
    // int a, b, c;
    // short s23423a=9;
    // cout<<s23423a;
    

// camelcase Notation

    // int marksInMaths=83;
    // cout<<"The marks of the student in maths is "<<marksInMaths<<endl;

    // string bhumit ="bhumit";
    // short a;
    // int b;
    // long c;
    // long long d;
    // float score = 45.32;
    // double score2 = 45.322;
    // long double score3 = 45.332;
    // score = 34.2;
    // cout<<"The score is "<<score<<endl;

    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout<<"a + b is "<<a + b<<endl;
    // cout<<"a - b is "<<a - b<<endl;
    // cout<<"a * b is "<<a * b<<endl;
    // cout<<"a / b is "<<(float)a / b<<endl;

    // int age;

    // cout<<"Enter age"<<endl;
    // cin>>age;

    // switch (age)
    // {
    // case 12:
    //     cout<<"you are 12 years old"<<endl;
    //     break;
    
    // case 18:
    //     cout<<"you are 18 years old"<<endl;
    //     break;
    
    // default:
    //     cout<<"you are nither 12 nor 18 years old"<<endl;
    //     break;
    // }

    // if (age>100 || age<12)
    // {
    //     cout<<"Invalide age"<<endl;
    // }

    // else if(age>=18){
    //     cout<<"you can vote"<<endl;
    // }
    
    // else 
    // {
    //     cout<<"you cannot vote"<<endl;
    // }
    
    // int index = 0;
    // while (index<34)
    // {    
    //     cout<<"we are at index number "<<index<<endl;
    //     index = index + 1;
    // }
    
    // do
    // {
    //     cout<<"we are at index number "<<index<<endl;
    //     index = index + 1;
    // } while (index <= 33);
    
    // for (int i = 0; i < 34; i++)
    // {
    //     cout<<"The value of i is "<<i<<endl;
    // }

    // int a, b;
    // cout<<"Enter first number"<<endl;
    // cin>>a;

    // cout<<"Enter second number"<<endl;
    // cin>>b;

    // cout<<"The function returned:-- "<<add(a,b)<<endl;

    int arr[]={1,3,6};
    // Array Index 0 1 2
    // cout<<arr[1]<<endl;

    int marks[6];

    for (int i = 0; i < 6; i++)
    {
        cout<<"Enter the marks of "<<i<<" the student"<<endl;
        cin>>marks[i];
    }
    

    return 0;
}