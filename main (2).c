//2 3 5 7 11 13 17 19
//WAP to find whether the given number is an armstrong number or not?
#include <stdio.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++)
        f*=i;   
    return f;
}
int main()
{
    int n,d,sum=0,copy_n;
    scanf("%d",&n);
    copy_n=n;
    //printf("%d",fact(5));
    while(n!=0){
        d=n%10;
        sum+=fact(d);
        n/=10;
        
    }
    if(copy_n==sum) printf("Its an strong number");
    else printf("It not an strong number");
}