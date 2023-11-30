#include<stdio.h>
int main(){
    int n, fact;
    printf("Enter the number:");
    scanf("%d",&n);
    int i;
    for(int num = 1 ; num < n/2 ; num++){
        for(i = 2 ; i < num ; i++){
            if(num%i == 0)
                break;
        }
        if(num == i && n%i == 0)
            fact = i;
    }
    printf("The largest prime factor of %d is %d.",n,fact);
    return 0;
}
