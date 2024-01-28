#include<bits/stdc++.h>
using namespace std;

class circle
{
   public:
   double radius;
   double cal_area()
   {
    return 3.14*radius*radius;
   }
};

int main()
{
    circle c1;
    c1.radius=10;
    cout<<"Radius of circle is "<<c1.radius<<endl;
    cout<<"Area of circle ="<<c1.cal_area()<<endl;
    return 0;
}