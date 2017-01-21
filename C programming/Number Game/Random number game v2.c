#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\t\tHello there! Welcome to the 'Guess a number' game.\n");
    printf("\n*** Instructions: Every time hit enter to continue. ***\n");
    getchar();

    printf("In here u will  guess a random number and type it in.\n"
           "You will get 10 chances to win the 1st level.\n"
           "And the computer will also guess a random number.\n"
           "And it will say that either u r right or wrong.\n");
    getchar();

    printf("\t\t\t\tREADY!\n");
    getchar();
    int min=1,max=3,chances=10,guess,number,level=1,a=1,b=3,c=2;//'b' is the level changing score. 'a' declare the level. 'c' declare the bonus
    double score=0;
    int i,bonus=0;
    for(i=1;i<=chances;i++)
    {
        if(level==a)
        {
            printf("\t\t\t\tLEVEL=%d\n\n",level);
            a++;
        }

        printf("Enter a number between %d to %d: ",min,max);
        scanf("%d",&guess);
        //Generating a random number
        srand(time(NULL));
        number=rand()%(max-min+1)+min;
        //Close
        if(guess==number)
        {
            score++;
            bonus++;
            printf("Congratulation! The number was %d.\n",number);
            printf("Chances left: %d.\tCurrent Score: %0.2lf\n\n",(chances-i),score);
            if(bonus==c)
            {
                chances+=level;
                printf("Congrats! you have got %d bonus chance.\n"
                       "Chances left: %d.\n\n",level,(chances-i));
                bonus=0;
            }
        }
        else if(guess!=number)
        {
            bonus=0;
            score-=0.25;
            printf("Sorry! The number was %d.\n",number);
            printf("Chances left: %d.\tCurrent Score: %0.2lf\n\n",(chances-i),score);
        }
        if(score>=b)
        {
            min+=2;
            max+=3;
            b+=2;
            level++;
            chances+=5;
            i=1;
            bonus=0;
            if(level%2==1 && level>2)
                c++;
        }
    }
    printf("\n\nYOU HAVE REACHED LEVEL = %d\nTOTAL SCORE = %0.2lf\n",level,score);

    return 0;
}
