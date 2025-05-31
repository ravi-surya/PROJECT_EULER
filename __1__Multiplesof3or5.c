
// THIS IS BRUTE FORCE METHOD

// #include <stdio.h>
//     int
//     main()
// {
//     int sum = 0;
//     for (int i = 1; i < 1000; i++)
//     {
//         if (i % 3 == 0 || i % 5 == 0)
//         {
//             sum += i;
//         }
//     }
//     printf("%d", sum);
//     return 0;
// }

#include <stdio.h>

int sumofmultiplesto1000(int n);
int main()
{
    int t = sumofmultiplesto1000(3) + sumofmultiplesto1000(5) - sumofmultiplesto1000(15);
    printf("%d", t);
}

int sumofmultiplesto1000(int n)
{
    int j = 999 / n;

    return n * ((j * (j + 1)) / 2);
}