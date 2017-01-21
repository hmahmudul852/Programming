#include <stdio.h>

struct student
{
    char name[50];
    int id;
    float grade;
};

int get_id_of_max_grade(struct student dir[], int dir_size)
{
    int i, max_grade_index=0;
    float max_grade = 0.0;

    for(i = 0; i < dir_size; i ++)
    {
        if ( dir[i].grade > max_grade)
        {
            max_grade = dir[i].grade;
            max_grade_index = i;
        }
    }
    return max_grade_index;
}

float get_avg_grade(struct student dir[], int dir_size)
{
    int i;
    float total_grade = 0.0, avg_grade;

    for(i = 0; i < dir_size; i ++)
    {
        total_grade += dir[i].grade;
    }
    avg_grade=total_grade/dir_size;

    return avg_grade;
}


void find_name(struct student dir[], int dir_size)
{
    char st[100];
    printf("Enter the name u want to find : ");
    gets(st);
    printf("\n");
    int i,j,flag=0,index,temp,temp1;

    for(i=0;i<dir_size;i++)
    {
        for(j=0;dir[i].name[j]!='\0';j++)
        {
            temp=dir[i].name[j];
            temp1=st[j];
            if(temp==temp1)
            {
                flag=0;
                index=i;
            }
            else
                flag=1;
        }
    }

    if (flag==0)
         {
            printf("Student ID: %d\n\n",dir[index].id);
            printf("Grade: %.2f\n\n",dir[index].grade);
         }
    else
         printf("There is no such name exists");



}


int main ()
{
    int i;
    struct student directory[5]={
        {"Shakib",12,4.0}, {"Riyad\0",19,2.0},
        {"Niloy",22,4.0},{"Mashrafe",37,3.23},{"Tamim",72,3.75}};

    int i_max = get_id_of_max_grade(directory, 5);
    float avg_grade = get_avg_grade(directory, 5);
    find_name(directory, 5);

//    printf("Maximum Grade: %.2f\n\n",directory[i_max].grade);
//    printf("Student ID: %d\n\n",directory[i_max].id);
//    printf("Name: %s\n\n",directory[i_max].name );
//    printf("Average Grade: %.2f\n\n",avg_grade);


    return 0;
}
