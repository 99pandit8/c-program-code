#include<stdio.h>
void main()
{
int a,b,i;
printf("enter number:\n");
scanf("%d%d",&a,&b);
for(i=1;i<=a*b;i++)
{
  if(i%a==0 && i%b==0)
  break;
}
printf("LCM IS %d",i);


}