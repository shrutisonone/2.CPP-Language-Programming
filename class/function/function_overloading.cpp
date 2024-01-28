#include<bits/stdc++.h>
using namespace std;

inline void display()
{
	cout<<"Run hogaya"<<endl;
}
inline void display(int a)
{
    cout<<"\nFirse Run hogaya";
}
inline void display(int a,int b)
{
    cout<<"\n Dekhlo Firse Run hogaya";
}
inline void display(double d)
{
	cout<<"\n Lo kar lo baat ho gaya run ";
}

int main()
{
	//function overloading
    display();
	display(5);
	display(5,6);
	display(5.3645803);
}