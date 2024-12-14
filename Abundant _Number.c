#include<stdio.h>
int main()
{
  int N,Sum=0;
  scanf("%d",&N);
  for(int i=1;i<N;i++)
  {
    if(N%i==0)
    {
      Sum=Sum+i;
    }
  }
  if(Sum>N)
  {
    printf("True");
  }
  else
  {
    printf("False");
  }
}
