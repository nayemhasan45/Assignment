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


// fuck

#include<stdio.h>
#include<string.h>
long long int isPalindrome(char s[]){
    int j=strlen(s);
    for (int i = 0,j=strlen(s)-1; i < j; i++,j--)
    {
        if (s[i]=!s[j])
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    char s[1001];
    scanf("%s",s);
    int len = strlen(s);
    // long long int pal=;
    if (isPalindrome(s))
    {
        printf("Palindrome");
    }else
    {
        printf("Not Palindrome");
    }
    return 0;
}