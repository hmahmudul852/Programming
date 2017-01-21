#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    printf("\t\tHello there! Welcome to the 'Guess a number' game.\n");
    printf("\n*** Instructions: Every time hit enter to continue. ***\n");
    getchar();

    printf("In here u will  guess a random number and type it in.\n" "You will get 5 chances to win this game. and the\n "
           "computer will also guess a random number and it will say that\n "
           "either u r right or wrong.\n");
    getchar();

    printf("\t\t\t\tREADY!\n");
    getchar();

    int s,t=0;
    printf("Enter how many chances you want.\n");
    scanf("%d",&s);
    int a[s],b[t];
    int min,max,range,c,d,e,f;
    min=19;
    max=s*35;
    printf("Now guess %d number between %d to %d: ",s,min,max);
    for(c=0;c<s;c++)
        scanf("%d",&a[c]);
    for(d=0;d<s;d++)
    {
        e=0;
        //Generating a random number
        srand(time(NULL));
        range=rand()%(max-min+1)+min;
        //Close
        e=range;
        b[d]=e;
    }
    printf("\n");
    for(f=0;f<s;f++)
    {
        if(a[f]==b[f])
        {
            printf("\a\a\a\a\a\a"); //Beep sound
            printf("Ur ans was %d and computers was %d."
                   "\nU r cool man. U have beat the computer."
                   "\nDare to try again.\n",a[f],b[f]);
            printf("\n");
        //    getchar();
        }
        else if(a[f]<min || a[f]>max)
        {
            printf("\a\a\a\a\a\a");
            printf("U piece of shit i said between %d to %d only"
                   "\nNow thy again from the start.\n",min,max);
            printf("\n");
         //   getchar();
        }
        else
        {
            char y='9',z='4';
            char smiley=y/z;

            printf("\a\a\a\a\a\a");
            printf("Ur ans was %d and computers was %d."
                   "\nHa! %c Ha! %c man shame on u cant even beat a computer."
                   "\nWhy don't u try again and try to win."
                   "\nOr r u gonna leave in shame.\n",a[f],b[f],smiley,smiley);
            printf("\n");
        //    getchar();
        }
       // getchar();
    }
    return 0;
}

