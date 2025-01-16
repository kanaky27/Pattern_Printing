//4-Hollow Square Pattern for n=5
/*
    12345
    1   5
    1   5
    1   5
    12345
*/  

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==1 || i==n || j==1 || j==n)
                printf("%d",j);
            else
                printf(" ");    
        }
        printf("\n");
    }
return 0;
}