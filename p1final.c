#include<stdio.h>
void input(float *base,float *height)
{
    printf("Enter the base and height of the triangle:\n");
    scanf("%f%f",base,height);
}
void find_area(float base,float height,float *area)
{
    *area=0.5*height*base;
}
void output(float base,float height,float area)
{
    printf("The area of triangle with base %f and height %f is %f \n ",base,height,area);
}
int main()
{
   float base,height;
   input(&base,&height);
   float area;
   find_area(base,height,&area);
   output(base,height,area);
   return 0;
}