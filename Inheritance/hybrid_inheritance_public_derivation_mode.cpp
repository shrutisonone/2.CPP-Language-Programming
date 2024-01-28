#include<bits/stdc++.h>
using namespace std;

class Stud
{     
    int idnum;
    char name[90];
    public:
     void getstud()
     {
        cout<<"Enter studid and stud name";
        cin>>idnum>>name;
     }
};

class marks:public Stud
{
  protected:
   int m,p,c;
  public:
    void getmark()
    {
        cout<<"Enter the marks of maths , physics and chemistry";
        cin>>m>>p>>c;
    }
};

class sports
{
    protected:
    int sprtmrk;
    public:
    void getsprtmarks()
    {
     cout<<"Enter the sportsmarks\n";
     cin>>sprtmrk;
    }
};

class result:public sports,public marks
{
  int tot;
  float avg;
    public:
     void show()
     {
        tot=m+p+c;
        avg=tot/5.0;
        cout<<"Total "<<tot<<endl;
        cout<<"Average"<<avg<<endl;
        cout<<"Avg + sprtmarks="<<avg+sprtmrk<<endl;
     }
};

int main()
{
    result r;
    r.getstud();
    r.getmark();
    r.getsprtmarks();
    r.show();

    return 0;

}