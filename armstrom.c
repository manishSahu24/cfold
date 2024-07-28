#include<stdio.h>

int main(){
    int r ,n,sum=0,a;
    printf("enternol\n");
    scanf("%d",&n);
    a=n;
    while (n>0)
    {
       r=n%10;
       sum+=(r*r*r);
       n/=10;
    }
    if (a==sum)
    {
       printf("armstronf\n");
    }
    else{
        printf(" not armstronf\n");
    }
    
    return 0;
}