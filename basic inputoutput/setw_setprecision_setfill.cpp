#include<iomanip>
#include<iostream>
using namespace std;

int main()
{
    // setw(8)=column width is 8
    // setprecision(9)=decimal point after 9 digs
    // setfill('*')=fill blanks by the character

    cout<<setw(5)<<"12"<<setprecision(6)<<setiosflags(ios::left)<<"Window"<<setiosflags(ios::right)<<"  "<<setw(9)<<setprecision(3)<<setfill('*')<<9.45<<endl;


    return 0;
}

/*
setiosflags (ios_base::format_flags)   syntax of it 

set w is setting of column width to it

set precision is allocation memery blocks to it 

set fill is to fill all the data in particular precised memory blocks 


*/