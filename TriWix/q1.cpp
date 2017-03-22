#include<iostream>
using namespace std;
int main()
{
int f=1,d=0,b=1;
while(d<=666)
{

	while(f==1)
{
if(b+2>10)
{
	b-=3;
	f=0;
}
else
	b+=2;
	d++;
}
while(f==0)
{
	if(b-3<1)
	{
		b+=2;
		f=1;
	}
else
	b-=3;
	d++;}
}
cout<<b;
}

