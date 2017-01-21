#include <cstdio>

using namespace std;

int main(int argc, const char * argv[])
{

    int firstNumber;
    int secondNumber;

    scanf ("%d %d", &firstNumber, &secondNumber);

    if (firstNumber > secondNumber)
    {
        printf ("%d\n", firstNumber);

    }

    else
    {
        printf ("%d\n", secondNumber);
    }

    return 0;
}
