//Finds the LCS(Longest common subsequence) between two sequences x and y having length m and n respectively.
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

void printLCS(int m,int n,char x[],char y[])
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
for(;l>=0;l--)
	printf("%c",seq[l]);
}

int main()
{
	int m,n;
	printf("Enter two dimensions m and n: ");
	scanf("%d%d",&m,&n);
	char x[m],y[n];
	printf("Enter two sequences: ");
	scanf("%s",x);
	scanf("%s",y);
	findLCS(m,n,x,y);
	printLCS(m,n,x,y);
	printf("\n");
	return 0;
}
