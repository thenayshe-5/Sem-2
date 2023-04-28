/*An international school of class 7 with a class strength of 25, decided to assign 
additional marks for their students in Maths subject, to increase their class average. 
The additional marks were given to each student based on their month of birth. That is 
she was to give that number (month of birth) as the booster marks. The teacher wants 
to find the class average for the original marks as well as for the revised marks. She 
10 marks
wants to decide whether to implement this revision in marks or not based on the 
significant improvement in the class average. 
Write a C program to help the teacher get the class average for the original marks as 
well as the revised marks. 
She wants to know whether to implement this revision or not. This is decided based 
on the condition that the revision should bring a significant increase in the class 
average of 5 marks. Else, she is not planning to implement this revision in the marks 
strategy. Write the program to display this decision of “Can implement – Significant 
increase in class average” or “Need not implement – No significant increase in class 
average”. Keep every operation in this program separate. Get the students’ original 
marks and the month of their birth as input.*/

#include <stdio.h>

int main() {
    int i,marks[25],rev_marks[25];
    int month[25];

    for (i=0;i<25;i++){
        printf("Enter the marks of the student %d: ",i+1);
        scanf("%d",&marks[i]);
        printf("Enter the number of birth month: ");
        scanf("%d",&month[i]);
    }

    int sum=0;
    for (i=0;i<25;i++) {
        sum += marks[i];
    }

    int avg = sum/25;
    sum = 0;

    for (i=0;i<25;i++) {
        sum += marks[i] + month[i];
    }

    int rev = sum/25;

    printf("Original average of class: %d\n",avg);
    printf("Revised average of class: %d\n",rev);

    if (rev-avg >= 5)
    {
        printf("Can implement - Significant increase in class average.\n");
    }
    else
    {
        printf("Need not implement - No significant increase in class average.\n");
    }

    return 0;
}