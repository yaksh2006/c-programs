#include <stdio.h>
int remainder(int n){
    int rem;
    int sum=0;
    rem=n%10;
    n=n/10;
    sum = sum + rem*rem;
    n = sum;
    if(n==1){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int sum=0;
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    int temp=number;
    if(remainder(temp)){
        printf("Happy number\n");
    } else {
        printf("Not a happy number");
    }
}