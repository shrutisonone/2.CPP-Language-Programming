#include"student.h"
using namespace std;

int main()
{
    Student s;
    Student *ptr=&s;
    ptr->setData();
    ptr->display();
    ptr->setData(5);
    ptr->display();
}