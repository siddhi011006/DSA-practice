//find maximum element.
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
int max = a[0];
for(i=1; i<5; i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }
}
cout<<"maximum no="<<max;
}