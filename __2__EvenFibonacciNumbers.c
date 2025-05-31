#include <stdio.h>

int sumofmultiplesto1000(int n);

int main()
{
    long long sum=0;
    long long current_even =2;
    long long previous_even=0;
    while(current_even<4000000)
    {
        sum+=current_even;
        long long next_even=((current_even*4)+previous_even);
        previous_even=current_even;
        current_even=next_even;

    }
    printf("sum : %d",sum);
}