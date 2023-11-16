#include<stdio.h>
#include<math.h>
int main()
{
    long long int n ;
    scanf("%lld",&n);
    long long int arr [n];
    for (long long int i = 0; i < n; i++)
    {
        long long int x;
        int a,b,c;
        scanf("%lld %d %d %d",&x,&a,&b,&c);
        long long int mult = a*b*c;
        int ans =x/mult;
        if (ans*mult==x)
        {
            printf("%d\n",ans);
        }else
        {
            printf("-1\n");
        }
    }
    
    
    return 0;
}