#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b);     //FUNCTION PROTOTYPING

int main()
{
    int num1,num2; 
    cout<<"Enter number 1"<<endl;
    cin>>num1;
    cout<<"Enter number 2"<<endl;
    cin>>num2;
    cout<<"Sum is :"<<sum(num1,num2); //actual parameters 
}

int sum(int a,int b)  // formal parameters
{
    int c=a+b;
    return c;
}