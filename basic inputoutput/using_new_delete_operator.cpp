#include<iostream>
using namespace std;
int main()
{
    
    //operation of new and delete operator used for memroy allocation and deallocation (unaryy operators)
    int *ptr;
    ptr=new int;  //allocation of memory block;
    cout<<"\n Data"<<endl;
    cin>>*ptr;
    cout<<"\n No -"<<*ptr<<endl;
    delete ptr; //deallocation of memory block

}