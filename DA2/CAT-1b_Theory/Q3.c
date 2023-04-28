/* A digital locker in the bank is protected with a security mechanism. To open the 
locker a password of 9 characters is required. The input characters should be 
accepted as 3x3 matrix and two diagonal characters of the matrix are concatenated 
(refer to the example given below) and compared with the password already stored 
in a character array for authentication. Write a C program to implement this logic 
for password verification. 
 Input to open the device
 a b c
 d e f
 g h i
Concatenation of Diagonal characters: aeiceg*/

#include <stdio.h>
#include <string.h>

int main() {
    char mat[4][4];
    int i,j;
    char pwd[7],dia[7];

    printf("Enter the correct password diagonal: ");
    fgets(pwd,7,stdin);
    printf("Enter the password matrix:\n");
    for (i=0;i<4;i++) {
        scanf("%c %c %c",&mat[i][0],&mat[i][1],&mat[i][2]);
        mat[i][3] = '\0';
    }

    for (i=0;i<4;i++){
        dia[i] = mat[i][i];
    }

    for (i=0;i<4;i++){
        dia[i+3] = mat[i][2-i];
    }
    dia[6] = '\0';

    if (strcmp(dia,pwd) == 0) 
    {
        printf("Correct password.");
    }
    else
    {
        printf("Incorrect password.");
    }
    

    return 0;
}