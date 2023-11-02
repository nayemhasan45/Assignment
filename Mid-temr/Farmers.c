#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);
        int f1Work = m1*d;
        int totalWork = f1Work/(m1+m2);
        int ans= d-totalWork;
        printf("%d\n",ans);
    }
    
    return 0;
}