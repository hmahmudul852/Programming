/*WAP that can take input of 10 students’ information
(name, age, mark) and then print all those information.
*/

#include <stdio.h>

struct student
{
	char name[20];
	int age;
	int mark;
};

int main()
{
	while(1)
    {
        struct student x[10];

        for(int i=0;  i<10; i++)
            {
                printf("name of the student %d: ", i+1);
                gets(x[i].name);

                printf("age of the student %d: ", i+1);
                scanf("%d", &x[i].age);

                printf("mark of the student %d: ", i+1);
                scanf("%d", &x[i].mark);

                fflush(stdin);
            }

        for(int i=0;  i<10; i++)
            {
                printf("name of the student %d: %s\n", i+1, x[i].name);
                printf("age of the student %d\n", x[i].age);
                printf("mark of the student %d\n", x[i].mark);
            }
    }
}
