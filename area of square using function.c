#include<stdio.h>
int squarearea(int side);
int circlearea(int r);
int rectanglearea(int a,int b);

int main()
{
   int side=9;

   printf("area is:%d\n",squarearea(side));


    return 0;
}

int squarearea(int side)
{
    return side*side;
}
int circlearea(int r)
{
    return 3.14*r*r;
}
int rectanglearea(int a,int b)
{
     return a*b;}