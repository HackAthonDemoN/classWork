#include<iostream>
using namespace std;

int main()
{
	int c[2][2],fibo[20];
	fibo[0]=0;
	fibo[1]=1;
	int i;
	for(i=2;i<20;i++)
	fibo[i]=fibo[i-1]+fibo[i-2];
	for(i=0;i<20;i++)
	{
		c[0][0]=fibo[i];
		c[0][1]=c[0][0]/2;
		c[1][0]=c[0][1]*c[0][1]*c[0][1];
		c[1][1]=c[0][0]*c[0][1]*c[1][0];
		if(c[0][0]+c[0][1]+c[1][0]+c[1][1]==2844678)
		{
			cout<<fibo[i];
			break;
		}
	}
}
