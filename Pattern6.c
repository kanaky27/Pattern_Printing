// 6-Pascal’s Triangle for n=5
/*
           1
         1   1
       1   2   1
     1   3   3   1
   1   4   6   4   1
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, coef = 1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (int i=0;i<n;i++) 
        {
        for (int sp= 0; sp<n-i-1; sp++)
            printf("  ");
        for (int j=0;j<=i;j++) 
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef =coef*(i-j+1)/j;
            printf("%4d",coef);
        }
        printf("\n");
    }
return 0;
}