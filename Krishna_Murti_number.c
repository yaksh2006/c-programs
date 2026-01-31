#include <stdio.h>
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    } else {
        return n * factorial(n-1);
    }
}
int main(){
    int n;
    int sum = 0;
    int rem;
    int fact;
    printf("Enter the number: ");
    scanf("%d",&n);
    int temp = n;
    while(temp > 0){
        rem = temp%10;
        temp = temp/10;
        int fact = factorial(rem);
        sum = sum + fact;
    }
    printf("%d",sum);
}