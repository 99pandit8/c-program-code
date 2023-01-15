#include<stdio.h>
void main()
{
int n,a=0,b=1,c;
printf("enter nth term;\n");
scanf("%d",&n);
for(int i=1;i<=n;i++){
   printf("%d",a);
   c=a+b;
   a=b;
   b=c;
}










}