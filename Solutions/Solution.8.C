/* Write a program to Print Following Pattern for inputed number */
#include<stdio.h>
#include<conio.h>
void main()
{
	int n=3,i,j;
	clrscr();
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
		}
		for(j=1;j<i;j++)
		{
			printf("%d ",j);
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
	printf("\n");
	}
	getch();
}