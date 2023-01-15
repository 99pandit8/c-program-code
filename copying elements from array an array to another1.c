#include<stdio.h>
void main()
{
 int a[5],b[5],i;
 printf("enter the number:\n");
 for(i=0;i<5;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("copying element from a array to b:\n");
 for(i=0;i<5;i++)
 {
    b[i]=a[i];
 }
 printf("\noriginal(a[5]) -->  copy(b[5])\n");
  for(i=0;i<5;i++)
 {
    printf("%4d\t\t-->%6d\n",a[i],b[i]);
 }


}