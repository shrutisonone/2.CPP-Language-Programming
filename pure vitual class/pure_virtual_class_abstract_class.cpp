/* 
pure virtual class/do-nothing functions.
function is declared in base class without any code
re-defined in derived class once again
pure virtual class are always initialized wtih zero.


abstract base class
a class which contain pure virtual class 
never allow to define object 
not allowed to create object
*/

#include<bits/stdc++.h>
using namespace std;

class Shape     //since it has virtual class it is abstract class
{
    protected:
     float d1,d2;
    public:
     void getData()
     {
        cin>>d1>>d2;
     }
    virtual float area()=0;   // pure-virtual class function 
};

class Triangle:public Shape
{
    public:
     float area()                      //virtual float area()do not use virutal keyword while redifining it in derived classes 
     {
        return 0.5*d1*d2;
     }
    
};

class Square: public Shape
{
  public:
     float area()                      //virtual float area()do not use virutal keyword while redifining it in derived classes 
   {
    return 4*d1*d2;
   }
};

int main()
{
   // Shape s; //this gievs error since abstract base class cannot have objects 
   Triangle t;
   cout<<"Enter the base and the height "<<endl;
   t.getData();
   cout<<"Area of triangle is "<<t.area()<<endl;

   Square s;
   cout<<"Enter the side of the square "<<endl;
   s.getData();
   cout<<"Area of Square is"<<s.area()<<endl;

   return 0;
}