#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int arr[100],n,i,sum=0;
    scanf("%d\n",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
    }
    printf("%d",sum);
    return 0;
}