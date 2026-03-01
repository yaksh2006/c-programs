#include <stdio.h>
int main() {
    int arr[100];
    int n;
    int count = 0;
    int arr1[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            arr1[count] = arr[i];
            count = count + 1;
        }
    }
    for(int i = 0; i<n; i++) {
        if(arr[i] % 2 != 0) {
            arr1[count] = arr[i];
            count++;
        }
    }
    for(int i=0; i<n; i++) {
        printf("%d ",arr1[i]);
    }
}
