#include<iostream>
using namespace std;

int main()
{
    int i;
    char str[20];
    int count=0;

    std::cout<<"Enter a string "<<endl;
    for(i=1;str[i]!='\0';i++)
    {
       gets(str);
        if(str[i]=32)
        {
            break;
        }
        count++;
    }
    std::cout<<count<<endl;

    std::cout<<" DATA "<<endl;

   puts(str);
    return 0;
}