#include<iostream>

using namespace std;

int main()
{
	int n,x=0,y=0,flag=1,t;
	cin>>n;
	int *ar=new int[n], *f=new int[n],*g=new int[n];
	for(int i=0;i<n;i++)
	cin>>ar[i];
	
	for(int i=n-1;i>0;i--)
	for(int j=0;j<i;j++)
	if(ar[j]>ar[j+1])
	{
		t=ar[j];
		ar[j]=ar[j+1];
		ar[j+1]=t;
	}
	
	for(int i=0;i<n;i++)
	{
		if(ar[i]==ar[i+1])
		f[x++]=g[y++]=ar[i++];
		else
		{
			switch(flag)
			{
				case 1:{
					f[x++]=ar[i];
					flag++;
					break;
				}
				case 2:
				case 3:{
					g[y++]=ar[i];
					flag++;
					break;
				}
				case 4:{
					f[x++]=ar[i];
					flag=1;
					break;
				}
				
			}
		}
	}
	
	for(int i=0;i<x;i++)
	cout<<f[i]<<" ";
	cout<<"\n";
	for(int i=0;i<y;i++)
	cout<<g[i]<<" ";
}
