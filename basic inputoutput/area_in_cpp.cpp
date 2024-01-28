#include<iostream>
using namespace std;

#define AREA(l,b)(l*b)

int main()
{
    int l1=90;
    int l2=20;

    int area=AREA(l1,l2);
    
    cout<< "Area is :"<<area<<endl;

    return 0;
}