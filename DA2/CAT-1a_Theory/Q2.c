/*Consider that you are going to analyze the characters in the given string. Write 
a C program to extract the characters in the given string and print whether the 
character is an uppercase alphabet, lowercase alphabet, digits, whitespace, 
special symbols. Print the count of each category by storing their counts in an 
array. Use appropriate looping constructs to implement this.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter the string: ");
    fgets(str,200,stdin);

    int i,l;
    int arr[5] = {0,0,0,0,0};
    l = strlen(str);
    for (i=0;i<l-1;i++) {
        if (str[i] >= 65 && str[i] < 91)
        {
            arr[0] += 1; //arr[0] = uppercase alphabet
        }
        else if (str[i] >= 97 && str[i] < 123)
        {
            arr[1] += 1; //arr[1] = lowercase alphabet
        }
        else if (str[i] >= 48 && str[i] < 58)
        {
            arr[2] += 1; //arr[2] = digits
        }
        else if (str[i] == ' ')
        {
            arr[3] += 1; //arr[3] = whitespaces
        }
        else
        {
            arr[4] += 1; //arr[4] = special characters
        }
    }

    printf("Uppercase alphabets: %d\n",arr[0]);
    printf("Lowercase alphabets: %d\n",arr[1]);
    printf("Digits: %d\n",arr[2]);
    printf("Whitespaces: %d\n",arr[3]);
    printf("Special characters: %d\n",arr[4]);

    return 0;
}