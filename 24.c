#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char *s;
int i;
s=malloc(80);
if(!s)
{
printf("memory allocation failed\n");
exit(1);
}
printf("enter the string");
gets(s);
for(i=strlen(s)-1;i>=0;i--)
{
putchar(s[i]);
}
free(s);
)
