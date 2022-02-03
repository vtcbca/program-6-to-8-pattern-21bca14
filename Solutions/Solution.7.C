/* Write a program to print Following pettern (Reverse triangle) */
#include<stdio.h>
#include<conio.h>
void main()
{
	int rows,i,j,s=1,k;
	clrscr();
	printf("\n Enter the numbers of rows:");
	scanf("%d", &rows);
	printf("\n");
	for(i=rows;i>=1;i=i-2)
	{
		for(k=1;k<=s;k++)
		{
			printf("  ");
		}
		for(j=i;j<=(2*i-1);j++)
		{
			printf("*");
		}
		s++;
		printf("\n");
	}
	getch();
}

