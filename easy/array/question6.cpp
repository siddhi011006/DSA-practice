//reverse an array.
#include <iostream>
using namespace std;
int main()
{
int i, a[5],b[5];
cout<<"enter array";
for(i=0; i<5; i++)
{
cin>>a[i];
}
for(i=0; i<5; i++)
{
b[i]=a[4-i];
}
for(i=0; i<5; i++)
{
cout<<b[i]<<",";
}
}