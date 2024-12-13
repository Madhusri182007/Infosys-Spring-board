#include<stdio.h>
int main()
{
    int n,t,des=0,asc=0,c=0,rem;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        rem=n%10;
        c++;
        n=n/10;
    }
    int j=c-1;
    int arr[c];
    while(t!=0)
    {
        rem=t%10;
        arr[j]=rem;
        j--;
        t=t/10;
    }
    for(int i=0;i<c-1;i++)
    {
        if(arr[i]>=arr[i+1])
        {
            des++;
        }
        else if(arr[i]<=arr[i+1])
        {
            asc++;
        }
    }
    if((des==c-1)||(asc==c-1))
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}

    
