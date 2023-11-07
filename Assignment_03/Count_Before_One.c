#include<stdio.h>
long long int count_before_one(int arr[],int n){
    long long int cnt=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]!=1)
        {
            cnt++;
        }
        else{
            break;
        }
        
    }
    return cnt;  
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    } 
    long long int cnt=count_before_one(arr,n);
    printf("%lld",cnt);

    return 0;
}