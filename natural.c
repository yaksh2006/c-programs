#include <stdio.h>
int natural_number(int n){
    if(n>=1){
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int num1=(int)num;
    if(natural_number(num1)){
        printf("Natural Number");
    } else {
        printf("Not Natural Number");
    }
}