#include<stdio.h>
void main(){
  int a,b,rem;
  scanf("%d%d",&a,&b);
  while(a%b>0)
  {
  rem=a%b;
  a=b;
  b=rem;
  }
printf("HCF IS %d",b);


}