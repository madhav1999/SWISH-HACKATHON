#include<stdio.h>
int main()
{
    int x,p,sum=0;
    scanf("%d%d",&x,&p);
    int r=x;
    while(r!=0)
    {
        sum=sum+r;
        r=(int)(r-((r*p)/(float)100));
    }
     printf("%d\n",sum);
}
