//Write a cprogram to get the employee information name,age,position and Date of joining. 
//Print the employee list based on Alphabaetical order. 
//Display the order of the employees based on date of joining.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct emp {
    char name[40];
    int age;
    int day;
    int month;
    int year;
    char pos[10];
    int doj;
};

int main() {
    struct emp *ptr;
    int i,j,n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);

    ptr = (struct emp*) malloc (n*sizeof(struct emp));

    for (i=0;i<n;i++) {
        printf("Enter details of employee %d:\n",i+1);
        printf("Name: ");
        scanf("%s",(ptr+i)->name);
        printf("Age: ");
        scanf("%d",&(ptr+i)->age);
        printf("Position: ");
        scanf("%s",(ptr+i)->pos);
        printf("Date of joining (dd/mm/yyyy): ");
        scanf("%d/%d/%d",&(ptr+i)->day,&(ptr+i)->month,&(ptr+i)->year);
    }

    char names[n][30];
    for (i=0;i<n;i++) {
        strcpy(names[i],(ptr+i)->name);
        //printf("%s\n",names[i]);
    }

    char s[30];
    for (i=0;i<n;i++) {
        for (j=i+1;i<n;i++) {
            if (strcmp(names[i],names[j])>0)
            {
                strcpy(s,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],s);
            }
        }
    }

    printf("Employee list sorted by name:\n\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (strcmp((ptr+j)->name,names[i]) == 0)
            {
                printf("Name: %s\n",(ptr+j)->name);
                printf("Age: %d\n",(ptr+j)->age);
                printf("Position: %s\n",(ptr+j)->pos);
                printf("Date of Joining: %d/%d/%d\n",(ptr+j)->day,(ptr+j)->month,(ptr+j)->year);
                printf("\n");
            }
        }
    }

    int d,m,y,dates[n];
    for (i=0;i<n;i++) {
        d = (ptr+i)->day;
        m = (ptr+i)->month;
        y = (ptr+i)->year;
        dates[i] = (y*10000)+(m*100)+(d);
        (ptr+i)->doj = dates[i];
    }

    int temp;
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
            if (dates[i]>dates[j])
            {
                temp = dates[i];
                dates[i] = dates[j];
                dates[j] = temp;
            }
        }
    }

    printf("\n");
    printf("Employee list sorted by date of joining:\n\n");
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if ((ptr+j)->doj == dates[i])
            {
                printf("Name: %s\n",(ptr+j)->name);
                printf("Age: %d\n",(ptr+j)->age);
                printf("Position: %s\n",(ptr+j)->pos);
                printf("Date of Joining: %d/%d/%d\n",(ptr+j)->day,(ptr+j)->month,(ptr+j)->year);
                printf("\n");
            }
        }
    }

    return 0;
}