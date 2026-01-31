#include <stdio.h>
int reverse(int n){
    int rev=0;
    while(n>0){
        int rem=n%10;
        n=n/10;
        rev=rev*10+rem;
    }
    return rev;
}
int main(){
    int sum=0;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);
    printf("%d\n",reverse(sum));
}