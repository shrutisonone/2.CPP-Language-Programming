#include<bits/stdc++.h>
using namespace std;

class stud
{
    int roll;
    char name[90];
    double mark;

    public:
     stud()
     {
        roll=0;
        name[0]='\0';
        mark=0.0;
     }
     stud(int a,char *b,double c)
     {
        roll=a;
        strcpy(name,b);
        mark=c;
     }
};
