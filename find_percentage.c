#include <stdio.h>
int main()
{
    int marks[5], i, total=0;
    char choice;
    float average, percentage;
    
    while(choice!='n')
    {
    printf("Enter the marks: ");
    for(i=0; i<5; i++)
    {   
        scanf("%d", &marks[i]);
    }

    for(i=0;i<5; i++)
    {
        total=total+marks[i];
    }
    average=(float)total/5;
    percentage=((float)total*100)/500;

    printf("1.Total Marks: %d\n", total);
    printf("2.Average: %f\n", average);
    printf("3.Percentage: %f\n", percentage);


    printf("\n\tDo you want to continue?\n1.Press 'y' for yes\n2.Press 'n' for exit: ");
    scanf(" %c", &choice);
    }
}