#include<stdio.h>
void input(int *a,int *b)
{
   printf("Enter two numbers to be added \n");
   scanf("%d%d", a,b);
}
void add (int a ,int b , int *sum)
{
  *sum=a+b;
}
void output(int a,int b , int sum)
{
  printf("The sum of the numbers %d + %d is = %d\n", a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
  return 0;
}