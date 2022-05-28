#include<stdio.h>
int main()
{
  int n,t,sum=0,rem;
  printf("enter an integer\n");
  scanf("%d",&n);
  t=n;
  while(t!=0)
  {
    rem=t%10;
    sum=sum+rem;
    t=t/10;
  }
  printf("sum of digits of %d=%d\n",n,sum);
  return(0);
}
