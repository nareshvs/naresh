#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,d,i,t;
printf("Enter the first term");
scanf("%d",&m);
printf("Enter the total number of terms");
scanf("%d",&n);
printf("Enter the difference value");
scanf("%d",&d);
t=a+(n-1)*d;
printf("Sum of the serious");
for(i=m;i<=t;i=i+d)
{
if(i!=t)
printf("%d",i);
else
printf("%d",t);
}
getch();
}
