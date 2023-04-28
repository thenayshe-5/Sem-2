//Write a C program to check whether a number is prime, armstrong, perfect number or not using functions.

#include <stdio.h>

int armstrong(int n) {
    int i=n,sum=0,dig;

    while (n > 0) {
        dig = n%10;
        sum += (dig^3);
        n = n/10;
    }
    
    if (i==sum)
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}

int prime(int n) {
    int i,ctr = 0;
    for (i=2;i<n;i++) {
        if ((n%i) == 0) 
        {
            ctr += 1;
        }
    }

    if (ctr == 0) {
        return 1;
    }
    else
    {
        return 0;
    }
}

int perfect(int n) {
    int i,sum = 0;
    
    for (i=1;i<n;i++) {
        if (n%i == 0)
        {
            sum += i;
        }
    }

    if (sum == n) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    int n;

    //printf("Enter a positive number: ");
    scanf("%d",&n);

    if (prime(n) == 1)
    {
        printf("%d is a prime number\n",n);
    }
    else if (prime(n) == 0)
    {
        printf("%d is NOT a prime number\n",n);
    }

    if (armstrong(n) == 1)
    {
        printf("%d is an Armstrong number\n",n);
    }
    else if (armstrong(n) == 0)
    {
        printf("%d is NOT an Armstrong number\n",n);
    }

    if (perfect(n) == 1) 
    {
        printf("%d is a perfect number\n",n);
    }
    else if (perfect(n) == 0)
    {
        printf("%d is NOT a perfect number\n",n);
    }


    return 0;
}