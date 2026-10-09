//Print array in reverse order
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
for(i=4; i>=0; i--)
{cout<<a[i]<<",";
}
}