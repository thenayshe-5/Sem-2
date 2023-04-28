/*Write a c program to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 ... n!/n 
by utilizing user defined recursive function. Get the value of n from the 
user. Do not use any storage classes. Without returning the calculated result 
from the function, display the result in main.*/

#include <stdio.h>

int fac(int n) {
    if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else
    {
        return n*fac(n-1);
    }
}

int main() {
    int i,n,sum=0;
    printf("Enter the values of n:");
    scanf("%d",&n);

    for (i=1;i<=n;i++) {
        sum += (fac(i)/i);
    }

    printf("The sum of series till (n = %d) is %d",n,sum);

    return 0;
}