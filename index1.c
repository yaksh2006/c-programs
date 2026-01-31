#include <stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    int ch;
    printf("Enter the choice as: \n");
    printf("1 For Positive\n");
    printf("2 for Negative\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        if(number>=0)
        printf("Positive");
        break;
        case 2:
        if(number<0)
        printf("Negative");
        break;
        default:
        printf("Invalid");
    }
}