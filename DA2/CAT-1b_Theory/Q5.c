/* Paul is provided with a number “x” whose scope will remain throughout the program. 
Using the concept of recursion, help Paul to write a “C program” for finding the value 
of (x)n
 where n should be less than or equal to 5.*/

 #include <stdio.h>

int power(int x, int n) {
    if (n == 1) {
        return x;
    }
    else
    {
        return x*power(x,n-1);
    }
}

int main() {
    int x,n;

    printf("Enter value of x: ");
    scanf("%d",&x);
    do
    {
        printf("Enter value of n: ");
        scanf("%d",&n);
    }
    while (n > 5);

    int p;
    p = power(x,n);
    printf("(%d)^%d = %d",x,n,p);

    return 0;
}