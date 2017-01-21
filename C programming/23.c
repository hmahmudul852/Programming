/*WAP that can take input of 10 students’ information
(name, age, physicsmark, chemistrymark, mathmark)
and then print each student name with his total mark.
*/

#include <stdio.h>

struct student
{
	char name[20];
	int age;
	int physicsmark;
	int chemistrymark;
	int mathmark;
};

int main()
{
	while(1)
    {
        struct student x[10];
        int total[10];

        for(int i=0;  i<2; i++)
        {
            printf("name of the student %d: ", i+1);
            gets(x[i].name);

            printf("age of the student %d: ", i+1);
            scanf("%d", &x[i].age);

            printf("physics mark of the student %d: ", i+1);
            scanf("%d", &x[i].physicsmark);

            printf("chemistry mark of the student %d: ", i+1);
            scanf("%d", &x[i].chemistrymark);

            printf("math mark of the student %d: ", i+1);
            scanf("%d", &x[i].mathmark);

            total[i]=x[i].physicsmark+x[i].chemistrymark+x[i].mathmark;

            fflush(stdin);
        }

        for(int i=0;  i<2; i++)
        {
            printf("name of the student %d: %s\n", i+1, x[i].name);
            printf("Total mark of the student %d\n", total[i]);
        }
	}
}

