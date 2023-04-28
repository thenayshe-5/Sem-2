/*The temperature in Chennai exists somewhere between 280C to 330C in a particular week. 
The temperature in Delhi is 80C lesser than in Chennai. Likewise, the 
temperature in Haveri is 50C more than that of Chennai. 
Write a C program to find the temperature of Gangtok for a particular week, which is the temperature 
difference between Delhi and Haveri. 
Get the temperature of Chennai (0C) as input for the week of 7 days and the temperature of 
Gangtok (0C) as output for the week of 7 days. 
Implement the program using arrays and validate the rules.*/

#include <stdio.h>

int main() {
    int Chen[7],Del,Gang[7],Hav;
    int i;

    for (i=0;i<7;i++)
    {
        scanf("%d",&Chen[i]);
        Del = Chen[i]-8;
        Hav = Chen[i]+5;
        Gang[i] = Hav-Del;
    }

    for (i=0;i<7;i++)
    {
        printf("%d ",Gang[i]);
    }
}