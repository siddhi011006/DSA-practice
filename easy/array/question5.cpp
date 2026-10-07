//count even and odd numbers of an array.
#include <iostream>
using namespace std;
int main()
{
int i, a[5],even=0,odd=0;
cout<<"enter array";
for(i=0; i<5; i++)
{
cin>>a[i];
if(a[i]%2==0)
{
even++;
}
else {
odd++;
}

}

cout<<"even="<<even<<endl;
cout<<"odd="<<odd<<endl;
}