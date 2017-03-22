#include<iostream>
using namespace std;

int main()
{
	int e,c=1;
	char d, st[]="ICUVD LVCWN ETR AXHIGK IA AOGREE, YKEYKCMA RP ERSH YE LAY HEOPNR JU LR WKCMACP, TRZE XRJKS AEKB VHBV WLJ SPZAYC INBII KG MYGH EGL, TIG PMWXVZ BRZIF \"RTWRFTG AAFFBSJO\"?";
	int l=sizeof(st)/sizeof(char)-1;
	
	for(int i=0;i<l;i++)
	{
		d=st[i];
		if(isalpha(d))
		{
			if(isalpha(d-c))
			{
				d=(char)(d-c);
			}
			else
			{
				c%=26;
				d=d-c;
				e=(int)'A'-(int)d;
				d='Z'-e+1;
				if(d>'Z')
				d-=26;
			}
			c++;
		 }
 	 st[i]=d;
	}
	cout<<st<<"\n\nIt says \"MISCHIEF MANAGED\"\n";
}
