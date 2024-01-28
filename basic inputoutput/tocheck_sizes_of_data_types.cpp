#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
   cout<< "Size of char :"<<sizeof(char)<<"bytes"<<endl;

   cout<< "char minimum value:"<< CHAR_MIN <<endl;

   cout<< "char maximum value:"<< CHAR_MAX << endl;

   cout<< "Size of int :"<<sizeof(int)<<"bytes"<<endl;

   cout<< "Int minimum value "<<INT_MIN << "bytes"<<endl;

   cout<< "Int maximum value "<< INT_MAX << "bytes"<<endl;

   cout<< "Size of SHort Int "<< sizeof(short int)<<"bytes"<<endl;

   cout<< "Size of Long int "<< sizeof(long int)<< "bytes"<<endl;

   cout<< "Size of unsigned int" << sizeof(unsigned long int)<<"  bytes"<<endl;

   cout<< "Size of signed int"<< sizeof(signed long int )<<"  bytes"<<endl;

   cout<< "Size of float"<< sizeof(float)<< "bytes"<<endl;

   cout<< "Size of double"<< sizeof(double) << "bytes"<<endl;

   cout<< "Size of wchar_t:"<<sizeof(wchar_t)<<"bytes"<<endl;

  return 0;
}