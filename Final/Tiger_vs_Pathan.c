#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int n;
    scanf("%d",&n);
    char s[n+1];
    scanf("%s",&s); 
    int cntT=0,cntP=0;
    for (int i = 0; i < n; i++)
    {
        if (s[i]=='T')
        {
            cntT++;
        }else
        {
            cntP++;
        }
    }
    if (cntT>cntP)
    {
        printf("Tiger\n");
    }else if (cntP>cntT)
    {
        printf("Pathaan\n");
    }else
    {
        printf("Draw\n");
    }
    }
    
    return 0;
}