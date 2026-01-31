#include <stdio.h>
int armstrong(int temp){
    int sum=0;
    int n=temp;
    while(n>0){
        int r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(temp==sum){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("Given number is armstrong");
    } else {
        printf("Given number is not armstrong");
    }
}