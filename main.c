#include <stdio.h>
#include <stdlib.h>

int get_sum(int nums[])
{  int sum=0;
    for (int i=0;i<5;i++)
    {
        sum+=nums[i];
    }
    return sum;
}
int get_average(int sum1,int size)
{
    int average = sum1 / size;
    return average;
}

int main()
{
    system("cls");

    int marks[5];

    int sum,sub_num;
    /*sub_num is subjects number*/

    float average , percentage;


    printf("Hello Student, welcome in our application. \n Please enter your subjects number");

    scanf("%d", &sub_num);

    printf("Please enter your marks ");

    for (int i = 0; i < sub_num; i++)
    {

        scanf("%d", &marks[i]);
    }

    system("cls");

     sum = get_sum(marks);

    printf("Your summation of all subject is : %d \n" , sum );

    average = get_average(sum,sub_num);

    printf("Your average is : %0.2f \n" , average );


    percentage = (sum * 100) / 500;
    printf("Your percentage = : %0.4f" ,percentage );


    if(percentage >= 90 && percentage <= 100)
    {
        printf("\n GPA = 4.0 ");
        printf("\n Grade : A+ ");

    }
    else if(percentage >= 80 && percentage <= 94)
    {

        printf("\n GPA = 3.7 ");
        printf("\n Grade : A ");

    }
    else if(percentage >= 80 && percentage <= 84)
    {
        printf("\n GPA = 3.3 ");
        printf("\n Grade : B+ ");

    }
    else if(percentage >= 70 && percentage <= 74)
    {
        printf("\n GPA = 2.7 ");
        printf("\n Grade : B- ");

    }
    else if(percentage >= 65 && percentage <= 69)
    {
        printf("\n GPA = 2.3 ");
        printf("\n Grade : C+ ");

    }
    else if(percentage >= 60 && percentage <= 64)
    {

        printf("\n GPA = 2.0 ");
        printf("\n Grade : C- ");

    }
    else if(percentage >= 55 && percentage <= 59)
    {

        printf("\n GPA = 1.7 ");
        printf("\n Grade : D+ ");

    }
    else if (percentage >= 50 && percentage <= 54 )
    {

        printf("\n GPA = 1.3 ");
        printf("\n Grade : D- ");

    }
    else if(percentage >= 0 && percentage <= 50)
    {

        printf("\n GPA = 0.0 ");
        printf("\n Grade : F ");
    }




    printf("\n Thank you for using our GPA Application.");


    return 0;
}
