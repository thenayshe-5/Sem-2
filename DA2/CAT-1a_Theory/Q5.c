/*Write a C Program that reads the input as a string from the user in main ().
The input should be a sentence with two words. Pass this string to a function.
Inside the function do the following operations: 
    For the first word, keep only the first character of the word to be in upper case and the rest 
of the characters in lower case.
    For the second word, convert all the characters into upper case letter.
    Print the revised string consisting of the two words in the function itself 
    Find the length of the entire string. Print its length in the function itself in the next line 
of the revised string. Use appropriate string function to print this result in the next line.
    Return the length of the string, if the length is less than 20. Else return the 
size of the string.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int convert(char str[]) {
    char str1[45], str2[45];
    int i=0;

    while (str[i] != ' ') {
        if (i == 0)
        {
            if (str[i] >= 65 && str[i] < 91)
            {
                str1[i] = str[i];
            }
            else
            {
                str1[i] = toupper(str[i]);
            }
        }
        else
        {
            if (str[i] >= 65 && str[i] < 91)
            {
                str1[i] = tolower(str[i]);
            }
            else
            {
                str1[i] = str[i];
            }
        }
        i += 1;
    }
    str1[i] = '\0';
    i += 1;
    int ctr = 0;
    
    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] < 91)
        {
            str2[ctr] = str[i];
        }
        else
        {
            str2[ctr] = toupper(str[i]);
        }
        i += 1;
        ctr += 1;
    }
    str2[ctr] = '\0';
    
    int l;
    l = strlen(str);
    printf("Revised string: %s %s\n",str1,str2);
    printf("Length of the string: %d\n",l-1);
    
    if (l-1<20)
    {
        return (l-1);
    }
    else
    {
        return sizeof(char)*(l);
    }
}

int main() {
    char str[50];
    printf("Enter the string: ");
    fgets(str,50,stdin);
    printf("Original string: %s",str);

    int n;
    n = convert(str);
    printf("Value returned from function = %d",n);


    return 0;
}