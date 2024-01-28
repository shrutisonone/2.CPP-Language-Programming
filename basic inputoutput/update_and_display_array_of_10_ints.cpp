#include<iostream>
#include<LIMITS>
using namespace std;

int main()
{
    int arr[10]; 
    int i;
    cout<<"Enter the 10 elements of the array "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}