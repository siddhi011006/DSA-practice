//find minimum element.
#include <iostream>
using namespace std;
int main()
{
    int i, a[5];
cout<<"enter array";
for(i=0; i<5; i++)
{
cin>>a[i];
}
int min = a[0];
for(i=1; i<5; i++)
{
    if(a[i]<min)
    {
        min=a[i];
    }
}
cout<<"minimum no="<<min;
}