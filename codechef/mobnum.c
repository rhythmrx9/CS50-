#include<stdio.h>
    
void main()
{
    int l,t,i;
    scanf("%d",&t);
    
    while(t--)
    {
        char s[100000];
        int count=0;
        scanf("%s",s);
        l=strlen(s);
    
        for(i=0;i<l;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            count++;
                    
        }
        
    if(s[0]!=48 && count==l && l==10)
     printf("YES\n");
     
    else 
     printf("NO\n");
     
    }
}