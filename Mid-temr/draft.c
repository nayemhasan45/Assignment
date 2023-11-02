#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);

        // Calculate the new number of workers
        int total_workers = M1 + M2;

        // Calculate the reduced time to complete the work
        int reduced_days = D * M1 / total_workers;

        printf("%d\n", D - reduced_days);
    }




    //new 
    #include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%s",&s);
    int cnt[26]={0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val=s[i]-97;
        cnt[val]++;
    }
    for (char i = 0; i < strlen(s); i++)
    {
        if (cnt[s[i]-97]!=0)
        {
            printf("%c - %d\n",i+97,cnt[s[i]-97]);
        }
        
        // printf("%c",i);  
    }
    
    return 0;
}
    return 0;
}
