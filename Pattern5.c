//5- Hollow Hourglass Pattern for n=5
/*
    ABCDEFGHI
     A     G
      A   E
       A C
        A
       A C
      A   E
     A     G
    ABCDEFGHI
*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
for (int i=0;i<n;i++)
    {
    for(int sp=1;sp<=i;sp++)
    {
        printf(" ");
    }
    for(int j=0;j<2*(n-i)-1;j++){
        if(i==0 ||i==2*(n-i) ||j==0 || j==2*(n-i)-2)
            printf("%c",'A'+j );
        else
            printf(" ");    
    }
    printf("\n");
}
for(int i=n-2;i>=0;i--){
    for(int sp=i-1;sp>=0;sp--)
    {
        printf(" ");
    }
    for(int j=0;j<2*(n-i)-1;j++){
        if(i==0 ||i==2*(n-i)||j==0 || j==2*(n-i)-2)
            printf("%c",'A'+j );
        else
            printf(" ");  
    }
    printf("\n");
}
return 0;
}