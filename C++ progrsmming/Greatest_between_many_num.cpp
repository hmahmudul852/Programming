#include <cstdio>

using namespace std;

/**
* return the greatest number between two numbers
*/
int maximum(int a, int b)
{
    if (a > b) return a;    // if 'a' is greater then just return 'a'
    return b;               // otherwise, return 'b'
}

/**
* return the gretest number among three numbers
*/
int maximum(int a, int b, int c)
{
    return maximum(a, maximum(b, c));
}

int maximum(int a [], int length)
{
    int ret = 0;

    for ( int i = 0; i < length; i++ ) {
        ret = maximum(ret, a [i]);
    }

    return ret;
}

int main(int argc, const char * argv[])
{
    int a = 10, b = 15, c = 25;

    int array [] = {3, 6, 2, 1, 9, 8};

    printf ("%d\n", maximum(a, b));

    printf ("%d\n", maximum(a, b, c));

    printf ("%d\n", maximum(array, 5));

    return 0;
}
