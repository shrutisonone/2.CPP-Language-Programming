#include<bits/stdc++.h>
using namespace std;

inline int sqrt(int a)
{
  return a*a;
}
inline int cube(int b)
{
    return b*b*b;
}

int main()
{
    //inline funcitions 
    /*
    a function is used to reduce code redundancy as well as memory space
    when a function is invoked things like argument matching return type and blahhh blahhh happens
    
    when a function is declared inline the functino body is replicated at function calling 
    condition => returning value is not a loop ,switch or goto
    
    */
   cout<<"Square is :"<<sqrt(5)<<endl;
   cout<<"Cube is:"<<cube(5)<<endl;

}