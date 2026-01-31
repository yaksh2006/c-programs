// Rotate the elements in array
#include <stdio.h>
#include <stdlib.h>
int main() {
    int arr[100];
    int arr1[100];
    int size;
    int count = 0;
    int k;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    printf("Enter an array: ");
    for(int i=0; i<size; i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of k from where we have to split the array: ");
    scanf("%d",&k);
    for(int i=0; i<size; i++) {
        if(k > i) {
            arr1[count] = arr[k+1];
            count++;
            k++;
        }
    }
    for(int i=0; i<size; i++) {
        if(i < k) {
            arr1[count] = arr[i];
            count++;
        }
    }
    for(int i=0; i<size; i++) {
        printf("%d ",arr1[i]);
    }
}