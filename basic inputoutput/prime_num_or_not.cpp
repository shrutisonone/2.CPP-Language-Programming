#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a num";
    cin>>num;
    int i;

    
    int count=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
           count++;
        }
    }
    if(count>2)
    {
        printf("It is not a prime number\n ");
    }
    else
    {
        printf("It is a prime number \n");
    }
      return 0;
}