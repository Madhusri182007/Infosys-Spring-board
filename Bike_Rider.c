#include<stdio.h>
int main()
{
    int N,M,D;
    int Total=1000;
    int R;
    scanf("%d%d%d",&N,&M,&D);
    int i=N*M;
    if(i>=Total)
    {
        printf("1");
    }
    else if(i>=500)
    {
        printf("2");
    }
    else if(i>=D)
    {
        R=Total/D;
        printf("%d",R);
    }
    else if(i<D)
    {
        printf("-1");
    }
    return 0;
} 
