#include <stdio.h>
float subject(float s,float m,float san){
    float sum;
    float average;
    sum=s+m+san;
    average=sum/3;
    return average;
}
int main(){
    float s,m,san;
    printf("Enter the subjects: ");
    scanf("%f %f %f",&s,&m,&san);
    printf("The percentage is %f ",subject(s,m,san));
}