//Get the three angles of a triangle as input.
//Find the count of the type of the triangle.
//Continue the process for 5 times.
//If the sum of the three angles is greater than 180 then prompt for correct values. (the sum of all internal angles of a triangle is always equal to 180°). Keep the count of the wrong entries also.


#include <stdio.h>

int main() {
    int ctr=0,ac=0,ob=0,ri=0,wr=0;
    int a,b,c;

    while (ctr < 5) {
        //printf("Enter the three angles:\n");
        scanf("%d",&a);
        printf("\n");
        scanf("%d",&b);;
        printf("\n");
        scanf("%d",&c);

        if (a+b+c==180)
        {
            ctr += 1;
            if (a == 90 || b == 90 || c == 90)
            {
                ri += 1;
            }
            else if (a > 90 || b > 90 || c > 90)
            {
                ob += 1;
            }
            else if (a+b < 90 && b+c < 90 && c+a < 90)
            {
                ac += 1;
            }
        }
        else
        {
            printf("Wrong entry. Try again.\n");
            wr += 1;
        }
    }

    printf("Acute Angled Triangle: %d\n",ac);
    printf("\n");
    printf("Right Angled Triangle: %d\n",ri);
    printf("\n");
    printf("Obtuse Angled Triangle: %d\n",ob);
    printf("\n");
    printf("Wrong Entries: %d\n",wr);

    return 0;
}