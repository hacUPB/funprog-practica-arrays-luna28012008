#include "exercises.h"

// -------------------------------
// Functions that return a single value
// -------------------------------

int calcSum(int arr[], int n)
{
    int sum = 0; 
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    return sum; 
}

int findMax(int arr[], int n)
{
    int max = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max; 
}

float calcAverage(int arr[], int n) 
{
    if (n == 0) {
        return 0.0;
    }

    int sum = 0; 
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    float average = (float)sum / n;
    return average; 
}

int countEvens(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { 
            count++;
        }
    }
    return count; 
}

int sumFirstLast(int arr[], int n)
{
    if (n == 0)
        return 0;

    return arr[0] + arr[n - 1];
}

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];  
        }
    }
    return min;  
}

int subtractArraysSum(int a[], int b[], int n)
{
    int sumDifferences = 0;
    for (int i = 0; i < n; i++) {
        sumDifferences += (a[i] - b[i]);  
    }
    return sumDifferences;  
}

int mergeArraysSum(int a[], int n1, int b[], int n2)
{
    int totalSum = 0;
    for (int i = 0; i < n1; i++) {
        totalSum += a[i];
    }
    for (int i = 0; i < n2; i++) {
        totalSum += b[i];
    }
    return totalSum; 
}

int productArray(int arr[], int n)
{
    int product = 1;
    for (int i = 0; i < n; i++) {
        product *= arr[i];  
    }
    return product;  
}

// -------------------------------
// Function that returns multiple values via pointer
// -------------------------------

void calcSumAverage(int arr[], int n, int *sum, float *average)
{
    if (n == 0) {
        *sum = 0;
        *average = 0.0;
        return;
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        s += arr[i];
    }
    *sum = s;
    *average = (float)s / n;
}