#include<stdio.h>

int mySqrt(int n) {
    int left = 1, right = n + 1;
    while (left + 1 < right) {
        int middle = (left + right) / 2;
        if (middle * middle <= n) {
            left = middle;
        } else {
            right = middle;
        }
    }

    return left;
}

int main()
{
    printf("%d\n",mySqrt(25));
    printf("%d\n",mySqrt(36));
    printf("%d\n",mySqrt(49));
    printf("%d\n",mySqrt(64));
    printf("%d\n",mySqrt(81));
    return 0;
}
