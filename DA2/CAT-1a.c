//Write a C program that accepts a string as input,print the length of the string and display the 
//word fequency, then use pointers to find the first repeated and non-repeated character in the 
//string, and print the output.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str,100,stdin);

    int l = strlen(str);
    int i,j,arr[l],ctr=0,rep=0;
    char *ptr = str;

    for (i=0;i<l;i++) {
        for (j=i+1;j<l;j++) {
            if (*(ptr+i) == *(ptr+j))
            {
                rep += 1;
                arr[ctr] = i;
                ctr += 1;
            }
        }
    }

    for (i=0;i<ctr;i++)
    {
        if (str[i] != str[arr[0]])
        {
            break;
        }
    }

    printf("Length of the string is: %d\n",l-1);
    printf("Word frequency is: %d\n",l-rep-1);
    if (rep == 0)
    {
        printf("No repeated characters found in the string.\n");
        printf("First non-repeated character is: %c\n",str[0]);
    }
    else
    {
        printf("First repeated character is: %c\n",str[arr[0]]);
        printf("First non-repeated character is: %c\n",str[i]);
    }

}