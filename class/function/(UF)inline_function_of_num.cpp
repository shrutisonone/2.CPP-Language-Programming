#include<iostream>
using namespace std;

inline int sqr(int n)
{
    return (n*n);
}
inline char msg(char *p)
{
    cout<<"Message is :"<<p;
    return 0;
}
int main()
{
    msg("Welcome");
    cout<<"\n the square of the num id :"<<sqr(8)<<endl;
    return 0;
}