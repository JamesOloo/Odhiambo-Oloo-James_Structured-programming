#include <stdio.h>

int main(){

    int n,i, sum = 0;

    int arr[n];

    printf("enter number of values to store in the array: \n");
    scanf("%d", &n);

    printf("enter the values:\n");

    for(i = 0;i < n; i++){
        printf("index %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < n; i++){
        sum = sum +  arr[i];


    }
    printf("\n");
    printf("the sum is %d: ", sum);

}
