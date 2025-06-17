#include <stdio.h>
//Hackerrank C medium level program of printing pattern using loops
//All info is before hand given by hackerrank to print specific pattern 
int main() 
{
    int n;
    scanf("%d", &n);       //'n' is number from which you want your pattern to start
    int size=(2*n)-1;      //size of ur pattern or matrix (i.e number of rows and columns) eg. if number is 4 then 7 rows and 7 columns will be there in matrix 
    int a[size][size];     //matrix
    int start=0;           //rows and columns will start from zero    
    int end=size-1;        //and will end at number 1 less than size(as starting from zero)
    int i,j;               //i represent row and j represent column
    
    while(n!=0)            //while loop will continue until the number'n' becomes zero
    {
    for(i=start;i<=end;i++)      
    {
        for(j=start;j<=end;j++)
        {
            if(i==start||i==end||j==start||j==end)   //this condition says if any row's or column's index is 0 or end(size-1) 
             a[i][j]=n;                             //then it will assign the number you have entered to matrix and later it will print that number in that position 
         }     
    }
       ++start;             //start and end position will kepp incrementing and decrementing respectively till a certain point until they both are same
       --end;                  
       --n;                  //n is decrementing because the next number that will print should be 1 lesser than previous number
       
    }
    for(i=1;i<=size;i++)      //from row and column number 1 to the last it will print numbers that were assign to it in upper loops
    {
        for(j=1;j<=size;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
