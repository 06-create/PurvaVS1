#include<stdio.h>
int main() {
    //Hackerrank 2 medium-level program
    //1D array sum  
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
