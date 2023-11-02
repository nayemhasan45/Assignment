#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int cnt2 =0,cnt3=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            cnt2++;
        }else if (arr[i]%3==0)
        {
            cnt3++;
        }
    }
    printf("%d %d",cnt2,cnt3);
    
    
    return 0;
}