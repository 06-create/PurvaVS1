#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//c basic medium-level 4th program
//enter every word of the sentence on new line 
int main() {

    char *s,i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]==' ')
        printf("\n");
        else
         printf("%c",s[i]);
    }
    return 0;
}