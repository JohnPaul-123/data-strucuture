#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
    float mark;

};

int main()

{
    struct student s;
    
    printf("Enter the strudent roll no: ");
    scanf("%d",&s.rollno);


    printf("Enter the strudent roll no: ");
    scanf("%19s",s.name);

    
    printf("Enter the mark: ");
    scanf("%f",&s.mark);

    printf("\n_________STUDENT DETAILS_________");
    printf("\nRoll NO of the Student : %d",s.rollno);
    printf("\nName of the Student: %s",s.name);
    printf("\nMark of the Student: %f",s.mark);
    
    
}
