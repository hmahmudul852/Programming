#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int max=35,min=19,a;
    int range;

    printf("\t\tHello there! Welcome to the 'Guess a number' game.\n");
    printf("\n*** Instructions: Every time hit enter to continue. ***\n");
    getchar();

    printf("In here u will  guess a random number and type it in and the "
           "computer will also guess a random number and it will say that "
           "either u r right or wrong.\n");
    getchar();

    printf("\t\t\t\tREADY!\n");
    getchar();

    printf("Now guess a number between 19 to 35: ");
    scanf("%d",&a);

    //Generating a random number
    srand(time(NULL));
    range=rand()%(max-min+1)+min;
    //Close
    printf("\n");
    if(a==range)
    {
        printf("\a\a\a\a\a\a"); //Beep sound
        printf("Ur ans was %d and computers was %d."
               "\nU r cool man. U have beat the computer."
               "\nDare to try again.\n",a,range);
        getchar();
    }
    else if(a<19 || a>35)
    {
        printf("\a\a\a\a\a\a");
        printf("U piece of shit i said between 19 to 49 only"
               "\nNow thy again from the start.\n");
        getchar();
    }
    else
    {
        char y='9',z='4';
        char smiley=y/z;

        printf("\a\a\a\a\a\a");
        printf("Ur ans was %d and computers was %d."
               "\n\nHa! %c Ha! %c man shame on u cant even beat a computer."
               "\nWhy don't u try again and try to win."
               "\nOr r u gonna leave in shame.\n",a,range,smiley,smiley);
        getchar();
    }
    getchar();

    return 0;
}
