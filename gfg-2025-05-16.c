// This problem was recently asked by Google.
// Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
// For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

#include <stdio.h>
#include <stdlib.h>

int solver(int array_of_ints[], int total)
{
    int K = array_of_ints[total];

    for (int i = 0; i < total; i++) {
        int sum = 0;
        
        sum = array_of_ints[i];

        for (int x = 0; x < total; x++) {
            int calc = 0;

            if (x == i)
                continue;

            calc = sum + array_of_ints[x];
            //fprintf(stdout, "i:%d ->  %d, x:%d -> %d == sum: %d\n", i, array_of_ints[i], x, array_of_ints[x], sum);

            if (calc == K) {
                fprintf(stdout, "OK, %d + %d = sum: %d - K: %d\n", sum, array_of_ints[x], calc, K);
                return 0;
            }
            //fprintf(stdout, ".., %d + %d = sum: %d - K: %d\n", sum, array_of_ints[x], calc, K);
        }
    }

    return 1;
}

int main(int argc, char **argv)
{
    if (argc < 3) {
        fprintf(stdout, "%s <list of ints, where the last one is K>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    int array_of_ints[argc - 1];
    for (int i = 0; i < argc; i++)
        array_of_ints[i] = atoi(argv[i]);

    solver(array_of_ints, argc - 1);

    exit(EXIT_SUCCESS);
}