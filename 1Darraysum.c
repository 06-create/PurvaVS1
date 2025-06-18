#include<stdio.h>
int main() {

    //hackerrank 1D array sum program    
    int n,i,sum=0;
    //Hackerrank 2 medium-level program
    //1D array sum  
    int n,i,sum=0;
    scanf("%d\n",&n);
    int *arr = (int *) malloc(sizeof(int) * n);
    int *arr = (int *) malloc(sizeof(int) * n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
    }
    printf("%d",sum);
    return 0;
}
