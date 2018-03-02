#include<stdio.h>
#include<conio.h>
void main()
{
int b[50],n,i,largest;
printf(" \n enter the size of arrray:");
scanf(" %d",&n);
printf("\n enter %d element of the array:",n);
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
largest=a[0];
}
for(i=1;i<n;i++)
{
if(largest<b[i])
largest=b[i];
}
printf("\n largest elements :%d",largest);
getch();
}
