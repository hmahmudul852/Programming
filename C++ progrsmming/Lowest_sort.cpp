#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{

    int firstNumber;
    int secondNumber;

    scanf ("%d %d", &firstNumber, &secondNumber);

    if (firstNumber < secondNumber) {
        printf ("%d %d\n", firstNumber, secondNumber);

    } else {
        printf ("%d %d\n", secondNumber, firstNumber);
    }


    return 0;
}

