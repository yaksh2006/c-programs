// Write a program move all negative number in beggning
#include <stdio.h>
#include <stdio.h>
int main() {
    int arr[100];
    int arr1[100];
    int num;
    int count = 0;
    printf("Enter the size of an array: ");
    scanf("%d",&num);
    printf("Enter the array: ");
    for(int i=0; i<num; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<num; i++) {
        if(arr[i] < 0) {
            arr1[count] = arr[i];
            count++;
        }
    }
    for(int i=0; i<num; i++) {
        if(arr[i] > 0) {
            arr1[count] = arr[i];
            count++;
        }
    }
    printf("Resultant Array is: ");
    for(int i=0; i<num; i++) {
        printf("%d ",arr1[i]);
    }
}