#include<iostream>
using namespace std;

int main()
{
  int *ptr=new int(10);
  cout<<"Enter Data\n";
  cin>>*ptr;
  cout<<"Entered number is :"<<*ptr;
  delete ptr;

}