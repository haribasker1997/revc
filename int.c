#include<stdio.h>
#include<conio.h>
void main()
{
   int  a[150];
   int rev[100];
   printf("Enter a number\t");
   scanf("%d", &a);
   printf("The original number is %d\n", a);
   for(i = 0; a[i] != '\0'; i++);
   {
      k = i-1;
   }
   for(j = 0; j <= i-1; j++)
   {
      rev[j] = str[k];
      k--;
   }
   printf("The reverse number is %d\n", a);
getch();
