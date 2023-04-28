//Write a C program to divide the integer array into two halves using function 
//recursion. Call the user-defined “divide” function recursively, with the left half 
//of the split array being passed as an argument for that function. Let the 
//recursive function to get executed until the array size becomes one. Count the 
//number of iterations to reach the base condition.

#include <stdio.h>

int divide(int arr[],int n, int *ctr) {
    int i;
    if (n == 1)
    {
        *ctr += 1;
        return arr[n-1];
    }
    else
    {
        if (n%2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = (n+1)/2;
        }
        //printf("%d\n",n);
        *ctr += 1;
        return divide(arr,n,&*ctr);
    }
}

int main() {
    int i,n,ctr = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    int arr2[1];
    arr2[0] = divide(arr,n,&ctr);
    printf("Base condition of array: %d\n",arr2[0]);
    printf("Number of iterations to reach base condition: %d\n",ctr);
    
    return 0;
}