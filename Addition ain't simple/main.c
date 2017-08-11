#include <stdio.h>
#include <string.h>

int main()
{
    char str[100000],rev[100000],alp[26];
    int T,i,j,sum,n;
    scanf("%d",&T);
    for(i=0;i<26;i++)
    {
        alp[i]=i+97;
    }
    for(j=0;j<T;j++)
    {
        scanf("%s",str);
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            sum=((((int)str[i]-96)+((int)str[n-1-i]-96))-1)%26;//calculator function
            rev[i]=alp[sum];
        }
        rev[i]='\0';//so that extra nos. aren't inputted
        printf("%s\n",rev);

    }
    return 0;
}
