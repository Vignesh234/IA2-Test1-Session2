#include<stdio.h>
int input_side()
{
   int n;
  printf("Enter a side of triangle:\n");
  scanf("%d",&n);
  return n;  
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && a!=c && b!=c)
  {
    return 1;
  }
    return 0;
}
void ouput(int a, int b, int c,int is Scalene)
{
  if(is Scalene == 0)
  {
    printf("The triangle with sides %d,%d and %d is Scalene \n ",a,b,c);
  }
  else
  {
    printf("The triangle with sides %d,%d and %d is not Scalene \n",a,b,c);
  }
}
int main()
{
  int a,b,c is Scalene;
  a=input_side();
  b=input_side();
  c=input_side();
  is Scalene=check_scalene(a,b,c);
  output(a,b,c,is Scalene);
  return 0;
}

