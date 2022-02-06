#include<stdio.h>
#include<string.h>
void input_two_string(char *a, char *b)
{
  printf("Enter the two words \n");
  scanf("%s",a);
  scanf("%s",b);
}
int strcmp(char *a,char *b)
{
  int c=0;
  while(a==b)
  {
    a++;
    b++; 
  }
  c=a-*b;
  return c;
}
void output(char *a, char *b, int result)
{
  if(result>0)
  printf("%s is greater than %s",a,b);
  else if(result<0)
  printf("%s is greater than %s",b,a);
  else
  printf("%s is same as %s",a,b);
}
int main()
{
  int char[20]
}