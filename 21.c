#include<stdio.h>
void fibo(int p,int q)
{
int temp;
printf("%d",p);
if(q<10000)
{
temp=q;
q=p+q;
p=temp;
fibo(p,q);
}
}
void main()
{
int p=0,q=1;
clrscr();
fibo(p,q);
getch();
}