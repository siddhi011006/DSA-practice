//find sum of elements.
#include <iostream>
using namespace std;
int main()
{
    int i, a[5], sum=0;
cout<<"enter array";
for(i=0; i<5; i++)
{
cin>>a[i];
sum+=a[i];
}
cout<<"sum="<<sum;
}