#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
clrscr();
printf("enter number");
scanf("%d",&a);
for(i=1;i<=10;i++)
printf("\n%d x %d=%d",a,i,a*i);
getch();
}