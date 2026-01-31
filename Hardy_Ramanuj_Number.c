#include <stdio.h>
#include <math.h>
int Calculate_Sum_Of_Powers(int n1,int n2){
    int Sum_of_cubes=0;
    int cube_of_n1;
    int cube_of_n2;
    cube_of_n1 = n1*n1*n1;
    cube_of_n2 = n2*n2*n2;
    Sum_of_cubes = cube_of_n1 + cube_of_n2;
    return Sum_of_cubes;
}
int main(){
    int Final_number;
    int n1,n2;
    int Result_of_sum_of_cubes;
    printf("Enter the final number : ");
    scanf("%d",&Final_number);
    printf("Enter the two number to take their cubes : ");
    scanf("%d %d",&n1,&n2);
    Result_of_sum_of_cubes = Calculate_Sum_Of_Powers(n1,n2);
    printf("Calculated number is %d: \n",Result_of_sum_of_cubes);
    if(Final_number == Result_of_sum_of_cubes){
        printf("It is Hardy Ramanuj number.");
    } else {
        printf("It is not a Hardy Ramanuj number.");
    }
}