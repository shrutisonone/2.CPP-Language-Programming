#include<iostream>
using namespace std;

int main()
{
    int f(void) {return 1;}
    int f(int ) {return 0;}
    void g(void) {int i=f(),j=f(0);}
}
//when we put " extern C" in cpp code
// then the unmangling of name takes place .
//character size in c is 4 and in cpp is  1