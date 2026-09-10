//Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main()
{
    long long num, temp;
    int count[10] = {0};
    int digit, maxDigit = 0, maxCount = 0, i;

    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = num;

    while(temp > 0)
    {
        digit = temp % 10;
        count[digit]++;
        temp = temp / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times = %d", maxDigit);
    printf("\nFrequency = %d", maxCount);

    return 0;
}
