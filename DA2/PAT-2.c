//Write a c program to find the number of  words,vowels, consonants, space and special characters 
//in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    //printf("Enter string: ");
    fgets(str,200,stdin);

    int i,j,w=1,v=0,c=0,sp=0,sc=0;
    int l = strlen(str);

    for (i=0;i<l;i++) {
        if ((str[i] >= 65 && str[i] < 91) || (str[i] >= 97 && str[i]<123))
        {
            if (str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
            {
                v += 1;
            }
            else
            {
                c += 1;
            }
        }
        else
        {
            if (str[i] == ' ')
            {
                sp += 1;
                w += 1;
            }
            else
            {
                //printf("%c\n",str[i]);
                sc += 1 ;
            }
        }
    }

    printf("Words = %d",w);
    printf("\n\n");
    printf("Vowels = %d",v);
    printf("\n\n");
    printf("Consonants = %d",c);
    printf("\n\n");
    printf("Space = %d",sp);
    printf("\n\n");
    printf("Special Characters = %d",sc-1);    //To remove null pointer as special character.

    return 0;
}