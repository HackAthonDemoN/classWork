#include<iostream>

using namespace std;

int main()
{
	int cas[3][3],i,j,s=2,t,c=0,p=0,f=1;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	cin>>cas[i][j];
	i=2,j=0;
	
	if((cas[0][2]||cas[0][0])&&(cas[2][0]||cas[2][2]))
	while((i!=0)||(j!=2))
	{
		p++;
		
		t=cas[s][0];
		cas[s][0]=cas[s][2];
		cas[s][2]=t;
		
		if(i==s&&j==2)
		j=0;
		else if(i==s&&j==0)
		j=2;
		
		if(s==0)
		s=2;
		else
		s--;
		
		if(cas[i-1][j]==1&&i!=0)
		{
			i--;
			c++;
		}
		else if(cas[i][j+1]==1&&j!=2)
		{
			j++;
			c++;
		}
		else if(cas[i][j-1]==1&&j!=0)
		{
			j--;
			c++;
		}
		if(p>20000)
		{
			cout<<"They never reach";
			f--;
			break;
		}
	}
	else
	{
		cout<<"They never reach";
		f--;
	}
	if(f)
	cout<<c;
	
}
