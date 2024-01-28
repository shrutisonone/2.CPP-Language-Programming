#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a num";
    cin>>num;
    int i;
    int dig=0;
    for(;num>0;)
    {
        dig=num%10;
        if(dig>1)
        { 
          break;  
        }
        num=num/10;
    }
    if(dig>1)
    {
        printf("It is not a binary  number\n ");
    }
    else
    {
        printf("It is a binary number \n");
    }
      return 0;
      
}