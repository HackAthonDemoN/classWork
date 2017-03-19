//Tests whether a given sequence is a subsequence of another sequence or not.

#include<stdio.h>
#include<stdlib.h>

char dir[100][100];
int val[100][100];

void findLCS(int m,int n,char x[],char y[])
{
	int i,j;
	for(i=0;i<=m;i++)
	{
		val[i][0]=0;
	}
	for(i=0;i<=n;i++)
	{
		val[0][i]=0;
	}
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			if(x[i-1]==y[j-1])
			{
				val[i][j]=val[i-1][j-1]+1;
				dir[i][j]='d';
			}
			else
			{
				if(val[i][j-1]>val[i-1][j])
				{
					val[i][j]=val[i][j-1];
					dir[i][j]='l';
				}
				else 
				{
					val[i][j]=val[i-1][j];
					dir[i][j]='u';
				}
			}
		}
}

int getLcsLength(int m,int n,char x[],char y[])
{
	char seq[m+n];
	int l=0;
	int i=m,j=n,c=1;
	
	while(i>=1&&j>=1)
		{
			
			if(dir[i][j]=='u')
			{
				i--;
			}
			else if(dir[i][j]=='l')
			{
				j--;
			}
			else if(dir[i][j]=='d')

			{
				seq[l++]=y[j-1];
				i--;
				j--;
			}
			}
return l;
}

int main()
{
	int m,n,l;
	printf("Enter two dimensions m and n: ");
	scanf("%d%d",&m,&n);
	char x[m],y[n];
	printf("Enter two sequences: ");
	scanf("%s",x);
	printf("Enter two sequences: ");
	scanf("%s",y);
	findLCS(m,n,x,y);
	l=getLcsLength(m,n,x,y);
	if(l==m||l==n)
		printf("The given sequence is a subsequence of the other sequence\n");
	else
		printf("The given sequence is NOT a subsequence of the other sequence\n");
	printf("\n");
	return 0;
}
