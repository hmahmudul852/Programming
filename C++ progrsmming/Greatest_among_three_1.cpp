#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{

    int firstNumber;
    int secondNumber;
    int thirdNumber;

    scanf ("%d %d %d", &firstNumber, &secondNumber, &thirdNumber);

    if (firstNumber > secondNumber) {
        if (firstNumber > thirdNumber) {
            printf ("%d\n", firstNumber);

        } else {
            printf ("%d\n", thirdNumber);

        }
    } else {
        if (secondNumber > thirdNumber) {
            printf ("%d\n", secondNumber);

        } else {
            printf ("%d\n", thirdNumber);

        }
    }

    return 0;
}
