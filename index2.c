#include <stdio.h>
int student_grade(int marks){
    if(marks>=0 && marks<=100){
        if(marks>=80){
            printf("Grade A\n");
        } else if(marks>=60 && marks<80){
            printf("Grade B\n");
        } else {
            printf("Grade C\n");
        }
    } else{
        printf("Invalid Marks\n");
    }
    return;
}
int main(){
    int marks;
    scanf("%d",&marks);
    printf("%d",student_grade(marks));
}