#include <stdio.h>
int main(){
    int n;
    while(1){
        printf("Enter the number: ");
        scanf("%d",&n);
        if(n%7==0){
            break;
        }
        printf("%d \n",n);
    }
    printf("Thank you");
}