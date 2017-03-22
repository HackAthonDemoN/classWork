#include<iostream>

using namespace std;

int main()
{
	int n=4,a[10],i,d,p,j,c;
	for(i=0;i<4;i++)
	{
		d=n;
		j=-1;
		while(d!=0)
		{
			p=d%10;
			a[++j]=p;
			d/=10;
		}
		n=0;
		c=1;
		p=a[j];
		for(--j;j>=0;j--)
		{
			if(a[j]==p)
			c++;
			else
			{
				n=n*10+c;
				n=n*10+p;
				c=1;
				p=a[j];
			}
		}
		n=n*10+c;
		n=n*10+p;
	}
	cout<<n;
}
