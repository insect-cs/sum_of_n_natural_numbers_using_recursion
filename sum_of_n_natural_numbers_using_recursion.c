#include<stdio.h>
int natural(int x);

int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);

    printf("the sum of %d natural numbers is %d\n",n,natural(n));
    return 0;
}

int natural(int x){
    int sum=0;
    if(x==0 || x==1)
    {
        return x;
    }
    else
    {   for(int i=0; i<=x; i++)
       {
           sum += i;
       }
        return sum;
    }
    
}
