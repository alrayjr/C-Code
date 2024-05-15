#include <stdio.h>

//main function begin

int main(void)
{
    int counter = 0; // # of grade ti be entered next
    int grade = 0; //grade value
    int total = 0; // sum of entered grades
    float average;//avg number of grades
    //int stud;
    printf("PL enter 1st students grade\n");
    scanf("%d", &grade);
    //total =0; //initializing total
    //counter = 1;//initializing loop counter

    while (grade != -1)
    {
        total = total +grade;
        counter = counter + 1;
        printf("Keep Enter Grade of all your students\n ");
        printf("When you finish enter -1 -->");
        scanf("%d", &grade); // read grade from user
        //total = total + grade; // add grade to total
        //counter = counter + 1;//incriment counter
    }
        average = (float) total / counter; // integer division
        printf("class average is %.3f\n", average);
}// end main function
