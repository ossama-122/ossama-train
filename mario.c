#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n;

    do
    {
        n = get_int("height: ");
    }
    // the spoiler

    while (n <= 0 || n > 8);

    //to create columns
    for (int i = 1; i <= n; i++)
    {
        // to print space

        for (int j = 0; j < n - i; j++)

        {
            printf(" ");
        }
        //to print #

        for (int g = 0; g <= i - 1; g++)

        {
            printf("#");
        }

        {
            printf("  ");
        }



        for (int j = 1; j <= i; j++)
        {
            printf("#");

        }


        printf("\n");


    }


}

