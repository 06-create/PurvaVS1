#include <stdio.h>

int main()
{
    char s[1000];
    int f[10]={0};
    int i;
    scanf("%[^\n]", s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
          f[s[i]-'0']++;

        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",f[i]);
    }
    return 0;
}