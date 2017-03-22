#include<iostream>
using namespace std;

int main()
{
	int e,c=1;
	char d, st[]="SPRA CYBJ FV HZLFSOAQU";
	int l=sizeof(st)/sizeof(char)-1;
	
	for(int i=0;i<l;i++)
	{
		d=st[i];
		if(d!=' ')
		{
			d+=c;
			c++;
		if(d>'Z')
		{
			e=(int)d-(int)'Z';
			d='A'+e-1;			
 		}
		 }
 	 st[i]=d;
	}
	cout<<st;
}
