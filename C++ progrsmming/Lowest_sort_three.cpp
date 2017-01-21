#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{

    int firstNumber;
    int secondNumber;
    int thirdNumber;

    scanf ("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber < secondNumber) {
        if (firstNumber < thirdNumber) {
            if (secondNumber < thirdNumber) {
                printf ("%d %d %d", firstNumber, secondNumber, thirdNumber);

            }
            else {
                printf ("%d %d %d", firstNumber, thirdNumber, secondNumber);

            }
        }
        else {
            printf ("%d %d %d", thirdNumber, firstNumber, secondNumber);

        }
    }

    else if (secondNumber < thirdNumber) {
        if (firstNumber < thirdNumber) {
            printf ("%d %d %d", secondNumber, firstNumber, thirdNumber);

        }
        else {
            printf ("%d %d %d", secondNumber, thirdNumber, firstNumber);

        }
    }

    else {
        if (firstNumber < secondNumber) {
            printf ("%d %d %d", thirdNumber, firstNumber, secondNumber);

        }
        else {
            printf ("%d %d %d", thirdNumber, secondNumber, firstNumber);

        }
    }

    printf ("\n");

    return 0;
}

