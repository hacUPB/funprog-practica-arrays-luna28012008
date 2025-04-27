#include <stdio.h>
#include "exercises.h"

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int n1 = 5;
    int n2 = 5;
    int sum;
    float average;

    printf("calcSum: %d\n", calcSum(arr1, n1));
    printf("findMax: %d\n", findMax(arr1, n1));
    printf("calcAverage: %.2f\n", calcAverage(arr1, n1));
    printf("countEvens: %d\n", countEvens(arr1, n1));
    printf("sumFirstLast: %d\n", sumFirstLast(arr1, n1));
    printf("findMin: %d\n", findMin(arr1, n1));
    printf("subtractArraysSum: %d\n", subtractArraysSum(arr1, arr2, n1));
    printf("mergeArraysSum: %d\n", mergeArraysSum(arr1, n1, arr2, n2));
    printf("productArray: %d\n", productArray(arr1, n1));
    
    calcSumAverage(arr1, n1, &sum, &average);
    printf("calcSumAverage - Sum: %d, Average: %.2f\n", sum, average);

    return 0;
}

