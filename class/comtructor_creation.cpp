#include<iostream>
using namespace std;
struct Student
{
    int roll;
    Student(int x){roll=x;}
};

int main()
{
    struct Student s(2);  // direct initialization by writing "Student s(2)"
    cout<<s.roll;
    return 0;
}

/*
character literals in c are integers whereas in cpp it is characters
c compiles fine for function calling first and then defining it ,but not cpp
decalring a variable as a constant without initializing it compiles fine in c but not in cpp
cpp does type checikng more strictly.
NAME MANGLING = cpp supports funtion overloading that is there can be more than one function with same name but different parameters ....
...to distinguish it it changes the names by addding an extra information about the aarguments ...this addition of extra information to the arguments ..
is called as name mangling 



*/