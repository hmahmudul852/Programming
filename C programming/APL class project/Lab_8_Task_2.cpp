#include <cstdio>

struct student
{
    char name[50];
    int id;
    float grade;
};

int main ()
{
    int i;
    struct student directory[5]={{"Shakib",12,4.0}, {"Riyad",19,2.0},
                    {"Niloy",22,4.0},{"Mashrafe",37,3.23},{"Tamim",72,3.75}};
    FILE *fpOutput;

    for (i = 0; i < 5; i ++)
    {
        fpOutput = fopen("studends.txt","a");
        fprintf(fpOutput,"%s %d %.2f\n\n", directory[i].name,directory[i].id,directory[i].grade);
    }
    fclose(fpOutput);
    return 0;
}
